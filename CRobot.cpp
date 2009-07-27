#include "stdafx.h"
#include "CRobot.h"
#include <windows.h>


int CRobot::OpenCom(int com_number,int baudrate,int parity,int databits,int stopbits)
	{

		bool success;
		switch(OS)
		{
		case 0: 
			char pComm[4];
			pComm[0]='C';
			pComm[1]='O';
			pComm[2]='M';
			pComm[3]=com_number+48;
			TCHAR *pcCommPort = TEXT("COM6");
			hCom = CreateFile(pcCommPort,
			GENERIC_READ|GENERIC_WRITE,
			0,NULL,
			OPEN_EXISTING,FILE_ATTRIBUTE_SYSTEM,NULL);
			
			if(hCom == INVALID_HANDLE_VALUE)
				{
				success=false;
				}


			

			cto.ReadIntervalTimeout = 100;
			cto.ReadTotalTimeoutMultiplier=2;
			cto.ReadTotalTimeoutConstant=100;
			cto.WriteTotalTimeoutMultiplier=2;
			cto.WriteTotalTimeoutConstant=0;
		
			dcbCom.BaudRate=baudrate;//9600
			dcbCom.ByteSize=8;
			dcbCom.DCBlength=sizeof(DCB);
			dcbCom.EofChar=0x1A;
			dcbCom.ErrorChar='?';
			dcbCom.EvtChar=0x10;
			dcbCom.fAbortOnError=FALSE;
			dcbCom.fBinary=TRUE;
			dcbCom.fDsrSensitivity=FALSE;
			dcbCom.fDtrControl=DTR_CONTROL_ENABLE;
			dcbCom.fDummy2=0;
			dcbCom.fErrorChar=FALSE;
			dcbCom.fInX=FALSE;
			dcbCom.fNull=FALSE;
			dcbCom.fOutX=FALSE;
			dcbCom.fOutxCtsFlow=FALSE;
			dcbCom.fOutxDsrFlow=FALSE;
			dcbCom.fParity=FALSE;
			dcbCom.fRtsControl=RTS_CONTROL_ENABLE;
			dcbCom.fTXContinueOnXoff=FALSE;
			dcbCom.Parity=NOPARITY;
			dcbCom.StopBits=ONESTOPBIT;
			dcbCom.wReserved=0;
			dcbCom.wReserved1=0;//n'était pas définit ???
			dcbCom.XoffChar=0x13;
			dcbCom.XoffLim=0x100;
			dcbCom.XonChar=0x11;
			dcbCom.XonLim=0x100;
			
			SetupComm(hCom, 4096, 4096);


			SetCommTimeouts(hCom,&cto);

			success=SetCommState(hCom, &dcbCom);

			success=GetCommState(hCom,&dcbCom);		

			PurgeComm(hCom, PURGE_TXCLEAR|PURGE_RXCLEAR|PURGE_TXABORT|PURGE_RXABORT);
			EscapeCommFunction(hCom, SETDTR);
			EscapeCommFunction(hCom, CLRDTR);
			break;
			
			
		}
		return 1;


	}


int CRobot::CloseCom()
	{
	CloseHandle(hCom);
	return 1;
	}


int CRobot::SendData(unsigned char *dataBuffer, int bytesToSend)
	{
	int written=-1;
	bool ok = WriteFile(hCom,dataBuffer,bytesToSend,(LPDWORD)&written,NULL);
	FlushFileBuffers(hCom);
	return 1;
	}

int CRobot::ReadData(unsigned char *dataBuffer, int bytesToRead)
	{
	DWORD read=-1;
	bool ok = ReadFile(hCom,dataBuffer,bytesToRead,&read,NULL);
	return (int)read;
	}


int CRobot::GenerateChecksum(unsigned char* command,int size,bool sevenbitMask=false)
{
	unsigned char* temp=command;
	unsigned char checksum=0;

	for(int i=0;i<size-1;i++)
		{
		checksum+=*(temp+i);
		}
	if ( sevenbitMask )
		{
        checksum &= 0x7F;
		}
    else
		{	
		checksum &= 0xFF;
		}
	return checksum;
}

bool CRobot::RCBReadyCheck()
{
	unsigned char rec1[2];
	unsigned char command1[2];
	command1[0]=0x0D;
	SendData(&command1[0],1);
	ReadData(rec1,1);
	if(rec1[0]==13)
		{
		return true;
		}
	else
		{
		return false;
		}


}



CRobot::CRobot()
{
	OS=0;
	OpenCom(6,115200,1,8,1);

	//setting up software switch
	
	unsigned int myswitch;
	myswitch &= ~(0x104);
    myswitch |= 0x200;

	unsigned char in_option = 1; //force the ACK

    
    unsigned char command[5];
	unsigned char rec[2];

    command[0] = 0xF2;
    command[1] = in_option;
    command[2] = (myswitch>>8);
    command[3] = (myswitch&0xFF);

	command[4]= GenerateChecksum(command,5,false);

	while(!RCBReadyCheck())
	{
	}
	SendData(command,5);
	ReadData(rec,1);
	
	

	
}

CRobot::~CRobot()
{
	CloseCom();
}


int CRobot::GetRCBVersion(unsigned char *out_version)
{
	
	unsigned char command[2];
	unsigned char rec2[65];
	int written=-1;
	
	

	command[0]=0xFF;
	command[1] = GenerateChecksum(command,2,false);
	
	
	
	
	//OpenCom(6,115200,1,8,1);
	while(!RCBReadyCheck())
	{
	}
	
	SendData(&command[0],2);
	ReadData(rec2,65);

	//CloseCom();
	
	//copying result information about RCB to destination
	for(int i=0;i<65;i++)
		{
		*(out_version+i)=*(rec2+i);
		}
	
	
	return 1;


}

int CRobot::SetSingleChannel(int channel, int position, unsigned int speed, int options)
{
    unsigned char command[7];
	unsigned char rec[65];
	
	options |= 1; //force ACK

    if ( speed == 0 || speed > 255 )
    {
         return -1;
    }

	command[0] = 0xFE;
    command[1] = options;
    command[2] = channel;
    command[3] = 255;
    command[4] = (32902>>8) & 0xFF;    
    command[5] = 32902 & 0xFF;
    command[6] = GenerateChecksum(command,7,false);
	
	//OpenCom(6,115200,1,8,1);
	while(!RCBReadyCheck())
	{
	}

	SendData(&command[0],7);
	ReadData(&rec[0],1);

	if(rec[0]==6)
	{}
	
	command[0] = 0xFE;
    command[1] = options;
    command[2] = channel;
    command[3] = speed;
    command[4] = (position>>8) & 0xFF;    
    command[5] = position & 0xFF;
    command[6] = GenerateChecksum(command,7,false);
	
	

	while(!RCBReadyCheck())
	{
	}

	SendData(&command[0],7);
	ReadData(&rec[0],1);
	
	//CloseCom();
	
	if(rec[0]==6)
		{
		return 1;
		}
	else
		{
		return -1;
		}
}

int CRobot::SetAllChannels(int* position, unsigned char speed, int options, int motionIndex,int slotIndex)
{
    unsigned char command[54];
	unsigned char rec[2];
	char* position_c=(char*)position;

	options |= 1; //force ACK

    if ( speed == 0 || speed > 255 )
    {
         return -1;
    }

	command[0] = 0xFD;
    command[1] = options;
    command[2] = motionIndex-1;//motion
    command[3] = slotIndex-1;//position
    command[4] = speed;   //speed 
  
	for(int i=0;i<24;i++)
		{
		command[5+2*i] = (position[i]>>8) & 0xFF;    
		command[6+2*i] = position[i] & 0xFF;
		
		}

    command[53] = GenerateChecksum(command,54,false);


	
	//OpenCom(6,115200,1,8,1);
	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],54);
	ReadData(&rec[0],1);
	/*
	command[0] = 0xFE;
    command[1] = options;
    command[2] = channel;
    command[3] = 100;
    command[4] = (position>>8) & 0xFF;    
    command[5] = position & 0xFF;
    command[6] = GenerateChecksum(command,7,false);
	
	
	

	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],7);
	ReadData(&rec[0],1);
	*/
	//CloseCom();
	
	if(rec[0]==6)
		{
		return 1;
		}
	else
		{
		return -1;
		}
}


int CRobot::SetAllZero()
{
	int poslist[24];
	for (int i=0;i<24;i++)
		{
		poslist[i]=16384;
		}
	SetAllChannels(poslist,255,0,1,1);
return 1;
}

int CRobot::GetAllChannels(int *position, unsigned char *speed, int options, int motionIndex, int slotIndex)
{

	unsigned char command[5];
	unsigned char rec[50];

	command[0] = 0xFC;
    command[1] = options;
    command[2] = motionIndex-1;//motion
    command[3] = slotIndex-1;//position
    command[4] = GenerateChecksum(command,5,false);

	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],5);
	ReadData(&rec[0],50);

	unsigned char chksum=GenerateChecksum(rec,50,false);

	if(chksum==rec[49])
		{
		return 1;	
		}
	else
		{
		return -1;
		}

	



}

int CRobot::SetMotionData(int* position, unsigned char speed, char motion, char posnumber)
{
	unsigned char command[54];
	unsigned char rec[2];
	char* position_c=(char*)position;

	unsigned char options = 7; //force ACK and eeprom write

    if ( speed == 0 || speed > 255 )
    {
         return -1;
    }

	command[0] = 0xFD;
    command[1] = options;
    command[2] = motion-1;//motion
    command[3] = posnumber-1;//position
    command[4] = speed;   //speed 
  
	for(int i=0;i<24;i++)
		{
		command[5+2*i] = (position[i]>>8) & 0xFF;    
		command[6+2*i] = position[i] & 0xFF;
		
		}

    command[53] = GenerateChecksum(command,54,false);


	
	
	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],54);
	ReadData(&rec[0],1);

	
	
	if(rec[0]==6)
		{
		return 1;
		}
	else
		{
		return -1;
		}



}

int CRobot::SetAllHomePosition(int* position, int option)
{

	unsigned char command[52];
	unsigned char rec[2];
	char* position_c=(char*)position;

	option|= 1;


	command[0] = 0xFA;
    command[1] = option;
   
	for(int i=0;i<24;i++)
		{
		command[2+2*i] = (position[i]>>8) & 0xFF;    
		command[3+2*i] = position[i] & 0xFF;
		
		}

    command[50] = GenerateChecksum(command,51,false);


	
	
	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],50);
	ReadData(&rec[0],1);

	
	
	if(rec[0]==6)
		{
		return 1;
		}
	else
		{
		return -1;
		}


}

int CRobot::GetAnalogInputs(float* out_power,float* out_ad1,float* out_ad2,float* out_ad3)
{
	unsigned char command[2]; 
	unsigned char rec[9]; 
	unsigned char chksum;

	unsigned int power,ad1,ad2,ad3;

    command[0] = 0xE8;
	command[1] = GenerateChecksum(command,2,false);
	
	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],2);
	ReadData(&rec[0],9);

	chksum=GenerateChecksum(rec,9,false);

	if(chksum==rec[8])
		{
		power = (((unsigned int)rec[0])<<8) + rec[1];
		ad1 = (((unsigned int)rec[2])<<8) + rec[3];
		ad2 = (((unsigned int)rec[4])<<8) + rec[5];
		ad3 = (((unsigned int)rec[6])<<8) + rec[7];

		(*out_power) = (float)power * 0.01539f;
		(*out_ad1) = (float)ad1 * 0.00532f;
		(*out_ad2)= (float)ad2 * 0.00532f;
		(*out_ad3) = (float)ad3 * 0.00532f;

		return 1;	
		}
	else
		{
		return -1;
		}

	
	

}

int CRobot::PlayMotion(char motionIndex)
{
	unsigned char command[4];
	unsigned char rec[2];
	

	unsigned char options = 7; //force ACK and eeprom write

    

	command[0] = 244;
    command[1] = options;
    command[2] = motionIndex-1;//motion
    command[3] = GenerateChecksum(command,4,false);


	
	
	while(!RCBReadyCheck())
		{
		}

	SendData(&command[0],4);
	ReadData(&rec[0],1);

	
	
	if(rec[0]==6)
		{
		return 1;
		}
	else
		{
		return -1;
		}
	
}
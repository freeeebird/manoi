#include <windows.h>

class CRobot
{

private:
	int rcb;
	char OS; //variable with inforamtion about Operating System 0 - windows
	//int 
	

	HANDLE hCom;
	DCB dcbCom; //communications device control structure
	COMMTIMEOUTS cto; //timeouts 

	

	int OpenCom(int com_number,int baudrate,int parity,int databits,int stopbits);
	int CloseCom();
	int SendData(unsigned char* dataBuffer, int bytesToSend);
	int ReadData(unsigned char* dataBuffer, int bytesToRead);
	
	int GenerateChecksum(unsigned char* commands,int size,bool sevenbitMask);
	
	bool RCBReadyCheck();

public:

	CRobot();
	~CRobot();

	int GetRCBVersion(unsigned char *out_version /*65 characters*/);

	int Connect(int com_number,int baudrate,int parity,int databits,int stopbits);
	int Disconnect();


	int SetSingleChannel(int channel, int position, unsigned int speed, int options);
	int SetAllChannels( int* position, unsigned char speed, int options, int motionIndex,int slotIndex);
	int GetAllChannels( int* position, unsigned char *speed, int options, int motionIndex,int slotIndex);

	int SetMotionData(int* position, unsigned char speed, char motion, char posnumber);
	

	int SetSingleHomePosition(int channel, int position, int option);
	int SetAllHomePosition(int* position, int option);
	int GetAllHomePosition(int channel, int* position_out, int option);

	int GetAnalogInputs(float* out_power,float* out_ad1,float* out_ad2,float* out_ad3);

	int SetAllZero();
	
	int PlayMotion(char motionIndex);
	





};
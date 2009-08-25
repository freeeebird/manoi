/*!
 *
 * \file        CRobot.h
 * \author      Krzysztof Kin <chris@cvl.iis.u-tokyo.ac.jp>
 * \author      Bjoern Rennhak <bjoern@rennhak.de>
 * \version     $Id$
 * \brief       Header file for the base functions library of the Manoi Control SW
 * \note        {
 *                Copyright (c) 2009, Krzysztof Kin, The University of Tokyo
 *                All rights reserved, see COPYRIGHT file for more details.
 *
 *                o Code style used here is a modified Allman version
 *                o Variable naming convention used here is a variation of the hungarian notation where appropriate
 *                o Explicit shortform coding which the compiler also accepts has been avoided for the sake of clarity and unambiguity
 *                o Documentation tool here used is DoxyGen ( http://www.doxygen.org ) which is licenced under GPLv2
 *                    - Documenting style used here is the QT Style
 *                    - http://www.stack.nl/~dimitri/doxygen/docblocks.html
 *                    - http://www.stack.nl/~dimitri/doxygen/commands.html
 *                o A changelog can be found in the CHANGELOG file if appropriate
 *                o Formatting is optimized for the VIM Text editor
 *                    - configuration is done automatically by reading the details at the end of each file
 *                    - tabs are converted to whitespaces
 *                    - special folding is provided by explicit formatting tags
 *                o Usage of Exuberant CTags, CScope, Lint and Valgrind is supported and encouraged
 * }
 *
 */



#ifndef _CROBOT_H_                                                      ///< Prevent recursive includes
#define _CROBOT_H_                                                      ///< \def Define our current environment to prevent recursive includes


// Standard header includes {{{
#include "../library/copyright.h"                                           ///< Include our Copyright notice in every binary

//#ifdef _WINDOWS_
  #include <windows.h>
//#endif // _WINDOWS_


// }}}


// Definitions {{{
// }}}

// Structure definitions {{{
// }}}

// Typedefs {{{
// }}}

// Functions {{{
// }}}


/*!
 * \class CRobot
 * \author Krzysztof Kin <chris@cvl.iis.u-tokyo.ac.jp>
 * \brief Comprehensive set of functions allowing user to control Manoi robot according to RCB-3 command reference
 */
class CRobot
{

  private:
    int rcb;                          ///<

    int crouch_positions[10][24];     ///<
    int leftstep_position[10][24];    ///<

    HANDLE hCom;                      ///< 
    DCB dcbCom;                       ///< Communications device control structure
    COMMTIMEOUTS cto;                 ///< Timeouts 


    /*!
     * \function OpenCom
     * \brief Opens the serial port
     * \param com_number
     * \param baudrate
     * \param parity
     * \param databits
     * \param stopbits
     * \returns Integer, if successful returns true otherwise false
     */
    int OpenCom(int com_number,int baudrate,int parity,int databits,int stopbits);


    /*!
     * \function CloseCom
     * \brief Closes the serial port
     * \returns Integer, if successful returns true otherwise false
     */
    int CloseCom();


    /*!
     * \function SendData
     * \brief Transmits (TX/RX) data over the Serial (RS-232) interface.
     * \param dataBuffer
     * \param bytesToSend
     * \returns Integer, if successful returns true otherwise false
     */
    int SendData(unsigned char* dataBuffer, int bytesToSend);


    /*!
     * \function SendData
     * \brief Transmits (TX/RX) data over the Serial (RS-232) interface.
     * \param dataBuffer
     * \param bytesToRead
     * \returns Integer, if successful returns true otherwise false
     */
    int ReadData(unsigned char* dataBuffer, int bytesToRead);


    /*!
     * \function GenerateChecksum
     * \brief Transmits (TX/RX) data over the RS-232 interface and checks if the Transfer was ok.
     * \param commands
     * \param size
     * \param sevenbitMask
     * \returns Integer, if successful returns true otherwise false
     */
    int GenerateChecksum(unsigned char* commands,int size,bool sevenbitMask);


    /*!
     * \function RCBReadyCheck
     * \brief Checks if the RCB controller is "ready".
     * \returns Boolean, true if yes, false if not
     */
    bool RCBReadyCheck();


    /*!
     * \function Delay
     * \brief Executes a simple delay
     * \param ms
     * \notes FIXME: Stuff this into its own utility class
     */
    void Delay(int ms);


  public:

    CRobot(int com_number);
    ~CRobot();


    /*!
     * \function GetRCBVersion
     * \brief
     * \param out_version Pointer to a unsigned char array which needs to fit 65 chars.
     * \returns Integer, if successful returns true otherwise false
     */
    int GetRCBVersion(unsigned char *out_version);


    /*!
     * \function Connect
     * \brief
     * \param com_number
     * \param baudrate
     * \param parity
     * \param databits
     * \parm stopbits
     * \returns Integer, if successful returns true otherwise false
     */
    int Connect(int com_number,int baudrate,int parity,int databits,int stopbits);


    /*!
     * \function Disconnect
     * \brief
     * \returns Integer, if successful returns true otherwise false
     */
    int Disconnect();


    /*!
     * \function SetSingleChannel
     * \brief
     * \param channel
     * \param position
     * \param speed
     * \param options
     * \returns Integer, if successful returns true otherwise false
     */
    int SetSingleChannel(int channel, int position, unsigned int speed, int options);


    /*!
     * \function SetAllChannels
     * \brief
     * \param position
     * \param speed
     * \param options
     * \param motionIndex
     * \param slotIndex
     * \returns Integer, if successful returns true otherwise false
     */
    int SetAllChannels( int* position, unsigned char speed, int options, int motionIndex,int slotIndex);


    /*!
     * \function GetAllChannels
     * \brief
     * \param position
     * \param speed
     * \param options
     * \param motionIndex
     * \param slotIndex
     * \returns Integer, if successful returns true otherwise false
     */
    int GetAllChannels( int* position, unsigned char *speed, int options, int motionIndex,int slotIndex);


    /*!
     * \function SetMotionData
     * \brief
     * \param position
     * \param speed
     * \param motion
     * \param posnumber
     * \returns Integer, if successful returns true otherwise false
     */
    int SetMotionData(int* position, unsigned char speed, char motion, char posnumber);


    /*!
     * \function SetSingleHomePosition
     * \brief
     * \param channel
     * \param position
     * \param option
     * \returns Integer, if successful returns true otherwise false
     */
    int SetSingleHomePosition(int channel, int position, int option);


    /*!
     * \function SetAllHomePosition
     * \brief
     * \param position
     * \param option
     * \returns Integer, if successful returns true otherwise false
     */
    int SetAllHomePosition(int* position, int option);


    /*!
     * \function GetAllHomePosition
     * \brief
     * \param channel
     * \param position_out
     * \param option
     * \returns Integer, if successful returns true otherwise false
     */
    int GetAllHomePosition(int channel, int* position_out, int option);


    /*!
     * \function GetAnalogInputs
     * \brief
     * \param out_power
     * \param out_ad1
     * \param out_ad2
     * \param out_ad3
     * \returns Integer, if successful returns true otherwise false
     */
    int GetAnalogInputs(float* out_power, float* out_ad1, float* out_ad2, float* out_ad3);


    /*!
     * \function SetAllZero
     * \brief
     * \returns Integer, if successful returns true otherwise false
     */
    int SetAllZero();


    /*!
     * \function PlayMotion
     * \brief
     * \param motionIndex
     * \returns Integer, if successful returns true otherwise false
     */
    int PlayMotion(char motionIndex);


    /*!
     * \function Crouch
     * \brief
     * \returns Integer, if successful returns true otherwise false
     */
    int Crouch();


    /*!
     * \function LeftStep
     * \brief
     * \returns Integer, if successful returns true otherwise false
     */
    int LeftStep();


    /*!
     * \function MotionFromArray
     * \brief
     * \param position
     * \param framedelay
     * \param framecount
     * \param option
     * \returns Integer, if successful returns true otherwise false
     */
    int MotionFromArray(int* position, int framedelay, int framespeed,int framecount, int option);


     /*!
     * \function LearningModeInit
     * \brief
     * \returns Integer, if successful returns true otherwise false
     */
    int LearningModeInit();


    /*!
     * \function LearningModeGetServosState
     * \brief
     * \param positions
     * \returns Integer, if successful returns true otherwise false
     */
    int LearningModeGetServosState(int* positions);


    /*!
     * \function LearningModeEnd
     * \brief
     * \returns Integer, if successful returns true otherwise false
     */
    int LearningModeEnd();


    /*!
     * \function GetCurrentServosState
     * \brief
     * \param positions
     * \returns Integer, if successful returns true otherwise false
     */
    int GetCurrentServosState(int* positions);
	int CommSpeedTest();

};


#endif // end of _CROBOT_H_

// vim:ts=2:tw=100:wm=100


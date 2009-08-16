/*!
 *
 * \file        CRobot.h
 * \author      Krystof Kin <chris@cvl.iis.u-tokyo.ac.jp>
 * \author      Bjoern Rennhak <bjoern@rennhak.de>
 * \version     $Id$
 * \brief       Header file for the base functions library of the Manoi Control SW
 * \note        {
 *                Copyright (c) 2009, Krystof Kin, The University of Tokyo
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
#include "libary/copyright.h"                                           ///< Include our Copyright notice in every binary

#ifdef _WINDOWS_
  #include <windows.h>
#endif // _WINDOWS_


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
 * \author Krystof Kin <chris@cvl.iis.u-tokyo.ac.jp>
 * \brief This class does ... FIXME
 */
class CRobot
{

  private:
    int rcb;                  ///< FIXME


    /// FIXME - This makes no sense. Platform specific code should be removed during preprocessing. 
    // This is why we have "defines" etc. If we include all platform specific code it will enlarge our
    // binary significantly. In any case, windows.h is not available under GNU/Linux and the WINAPI is
    // neither.
    char OS; //variable with inforamtion about Operating System 0 - windows


    int crouch_positions[10][24];
    int leftstep_position[10][24];

    HANDLE hCom;                  // FIXME: Hungarian Notation in MS style is evil. Don't use it. Even MS says now so.
    DCB dcbCom;                   ///< communications device control structure
    COMMTIMEOUTS cto;             ///< timeouts 


    /*!
     * \function OpenCom
     * \brief Opens the serial port
     * \param
     * \returns
     */
    int OpenCom(int com_number,int baudrate,int parity,int databits,int stopbits);


    /*!
     * \function CloseCom
     * \brief Closes the serial port
     * \param
     * \returns
     */
    int CloseCom();


    /*!
     * \function SendData
     * \brief Transmits (TX/RX) data over the Serial (RS-232) interface.
     * \param
     * \returns
     */
    int SendData(unsigned char* dataBuffer, int bytesToSend);


    /*!
     * \function SendData
     * \brief Transmits (TX/RX) data over the Serial (RS-232) interface.
     * \param
     * \returns
     */
    int ReadData(unsigned char* dataBuffer, int bytesToRead);


    /*!
     * \function GenerateChecksum
     * \brief Transmits (TX/RX) data over the RS-232 interface and checks if the Transfer was ok.
     * \param
     * \returns
     */
    int GenerateChecksum(unsigned char* commands,int size,bool sevenbitMask);


    /*!
     * \function RCBReadyCheck
     * \brief Checks if the RCB controller is "ready".
     * \returns Boolean, true if yes, false if not
     */
    bool RCBReadyCheck();


    // FIXME: Stuff this into its own utility class
    void Delay(int ms);


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
    
    int Crouch();
    int LeftStep();

    int MotionFromArray(int* position, int framedelay, int framecount, int option);

    int GoToNaturalHumanPosture();

    int LearningModeInit();
    int LearningModeGetServosState(int* positions);
    int LearningModeEnd();

    int GetCurrentServosState(int* positions);

};


#endif // end of _CROBOT_H_

// vim:ts=2:tw=100:wm=100


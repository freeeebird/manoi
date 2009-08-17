
/*!
 * \fn PrintError
 * \author Bjoern Rennhak, <bjoern@rennhak.de>
 * \param lpszFunction The Name of the Function
 * \brief print error message to stdout
 *
 * This function will print out the error message of the last Error
 * using GetLastError and then exit with the errorcode (this function is
 * faithfully stolen from msdn). (formerly known as ErrorExit)
 */
void PrintError()
{
  LPVOID lpMsgBuf;
  LPVOID lpDisplayBuf;
  DWORD dw = GetLastError();

  FormatMessage(
    FORMAT_MESSAGE_ALLOCATE_BUFFER |
    FORMAT_MESSAGE_FROM_SYSTEM,
    NULL,
    dw,
    MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
    (LPTSTR) &lpMsgBuf,
    0, NULL );

    printf("<%s> --> Error Code: %i, Value: %s.\n", __FILE__, dw, lpMsgBuf);
}


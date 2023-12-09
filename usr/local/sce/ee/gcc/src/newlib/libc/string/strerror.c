// STATUS: NOT STARTED

#include "strerror.h"

char* strerror(int errnum) {
	char *error;
	
  char *pcVar1;
  
  switch(errnum) {
  case 1:
    pcVar1 = "Not owner";
    break;
  case 2:
    pcVar1 = "No such file or directory";
    break;
  case 3:
    pcVar1 = "No such process";
    break;
  case 4:
    pcVar1 = "Interrupted system call";
    break;
  case 5:
    pcVar1 = "I/O error";
    break;
  case 6:
    pcVar1 = "No such device or address";
    break;
  case 7:
    pcVar1 = "Arg list too long";
    break;
  case 8:
    pcVar1 = "Exec format error";
    break;
  case 9:
    pcVar1 = "Bad file number";
    break;
  case 10:
    pcVar1 = "No children";
    break;
  case 0xb:
    pcVar1 = "No more processes";
    break;
  case 0xc:
    pcVar1 = "Not enough space";
    break;
  case 0xd:
    pcVar1 = "Permission denied";
    break;
  case 0xe:
    pcVar1 = "Bad address";
    break;
  case 0xf:
    pcVar1 = "Block device required";
    break;
  case 0x10:
    pcVar1 = "Device or resource busy";
    break;
  case 0x11:
    pcVar1 = "File exists";
    break;
  case 0x12:
    pcVar1 = "Cross-device link";
    break;
  case 0x13:
    pcVar1 = "No such device";
    break;
  case 0x14:
    pcVar1 = "Not a directory";
    break;
  case 0x15:
    pcVar1 = "Is a directory";
    break;
  case 0x16:
    pcVar1 = "Invalid argument";
    break;
  case 0x17:
    pcVar1 = "Too many open files in system";
    break;
  case 0x18:
    pcVar1 = "Too many open files";
    break;
  case 0x19:
    pcVar1 = "Not a character device";
    break;
  case 0x1a:
    pcVar1 = "Text file busy";
    break;
  case 0x1b:
    pcVar1 = "File too large";
    break;
  case 0x1c:
    pcVar1 = "No space left on device";
    break;
  case 0x1d:
    pcVar1 = "Illegal seek";
    break;
  case 0x1e:
    pcVar1 = "Read-only file system";
    break;
  case 0x1f:
    pcVar1 = "Too many links";
    break;
  case 0x20:
    pcVar1 = "Broken pipe";
    break;
  case 0x21:
    pcVar1 = "Math argument";
    break;
  case 0x22:
    pcVar1 = "Result too large";
    break;
  case 0x23:
    pcVar1 = "No message of desired type";
    break;
  case 0x24:
    pcVar1 = "Identifier removed";
    break;
  default:
    pcVar1 = _user_strerror(errnum);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    break;
  case 0x2d:
    pcVar1 = "Deadlock";
    break;
  case 0x2e:
    pcVar1 = "No lock";
    break;
  case 0x3c:
    pcVar1 = "Not a stream";
    break;
  case 0x3e:
    pcVar1 = "Stream ioctl timeout";
    break;
  case 0x3f:
    pcVar1 = "No stream resources";
    break;
  case 0x40:
    pcVar1 = "Machine is not on the network";
    break;
  case 0x41:
    pcVar1 = "No package";
    break;
  case 0x42:
    pcVar1 = "Resource is remote";
    break;
  case 0x43:
    pcVar1 = "Virtual circuit is gone";
    break;
  case 0x44:
    pcVar1 = "Advertise error";
    break;
  case 0x45:
    pcVar1 = "Srmount error";
    break;
  case 0x46:
    pcVar1 = "Communication error";
    break;
  case 0x47:
    pcVar1 = "Protocol error";
    break;
  case 0x4a:
    pcVar1 = "Multihop attempted";
    break;
  case 0x4d:
    pcVar1 = "Bad message";
    break;
  case 0x53:
    pcVar1 = "Cannot access a needed shared library";
    break;
  case 0x54:
    pcVar1 = "Accessing a corrupted shared library";
    break;
  case 0x55:
    pcVar1 = ".lib section in a.out corrupted";
    break;
  case 0x56:
    pcVar1 = "Attempting to link in more shared libraries than system limit";
    break;
  case 0x57:
    pcVar1 = "Cannot exec a shared library directly";
    break;
  case 0x58:
    pcVar1 = "Function not implemented";
    break;
  case 0x59:
    pcVar1 = "No more files";
    break;
  case 0x5a:
    pcVar1 = "Directory not empty";
    break;
  case 0x5b:
    pcVar1 = "File or path name too long";
    break;
  case 0x5c:
    pcVar1 = "Too many symbolic links";
    break;
  case 0x5f:
    pcVar1 = "Operation not supported on socket";
    break;
  case 0x69:
    pcVar1 = "No buffer space available";
    break;
  case 0x6a:
    pcVar1 = "Address family not supported by protocol family";
    break;
  case 0x6b:
    pcVar1 = "Protocol wrong type for socket";
    break;
  case 0x6c:
    pcVar1 = "Socket operation on non-socket";
    break;
  case 0x6d:
    pcVar1 = "Protocol not available";
    break;
  case 0x6e:
    pcVar1 = "Can\'t send after socket shutdown";
    break;
  case 0x6f:
    pcVar1 = "Connection refused";
    break;
  case 0x70:
    pcVar1 = "Address already in use";
    break;
  case 0x71:
    pcVar1 = "Software caused connection abort";
    break;
  case 0x74:
    pcVar1 = "Connection timed out";
    break;
  case 0x7a:
    pcVar1 = "Message too long";
    break;
  case 0x7c:
    pcVar1 = "Socket type not supported";
    break;
  case 0x7f:
    pcVar1 = "Socket is already connected";
    break;
  case 0x80:
    pcVar1 = "Socket is not connected";
  }
  return pcVar1;
}

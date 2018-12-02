/**
 **********************************************************************
 * Copyright (c) 1988-2010 $organization$
 *
 * This software is provided by the author and contributors ``as is'' 
 * and any express or implied warranties, including, but not limited to, 
 * the implied warranties of merchantability and fitness for a particular 
 * purpose are disclaimed. In no event shall the author or contributors 
 * be liable for any direct, indirect, incidental, special, exemplary, 
 * or consequential damages (including, but not limited to, procurement 
 * of substitute goods or services; loss of use, data, or profits; or 
 * business interruption) however caused and on any theory of liability, 
 * whether in contract, strict liability, or tort (including negligence 
 * or otherwise) arising in any way out of the use of this software, 
 * even if advised of the possibility of such damage.
 *
 *   File: cplatform_serial_comm.h
 *
 * Author: $author$
 *   Date: 2/20/2010
 **********************************************************************
 */
#ifndef _CPLATFORM_SERIAL_COMM_H
#define _CPLATFORM_SERIAL_COMM_H

#include "cplatform.h"

#define SERIAL_COMM_DEVICE_NUMBERX(number) "" #number ""
#define SERIAL_COMM_DEVICE_NUMBER(number) SERIAL_COMM_DEVICE_NUMBERX(number)

#if defined(WINDOWS) 
/* Windows
 * ...
 */
#define PLATFORM_SERIAL_COMM_BAUD_110    CBR_110   
#define PLATFORM_SERIAL_COMM_BAUD_300    CBR_300   
#define PLATFORM_SERIAL_COMM_BAUD_600    CBR_600   
#define PLATFORM_SERIAL_COMM_BAUD_1200   CBR_1200  
#define PLATFORM_SERIAL_COMM_BAUD_2400   CBR_2400  
#define PLATFORM_SERIAL_COMM_BAUD_4800   CBR_4800  
#define PLATFORM_SERIAL_COMM_BAUD_9600   CBR_9600  
#define PLATFORM_SERIAL_COMM_BAUD_14400  CBR_14400 
#define PLATFORM_SERIAL_COMM_BAUD_19200  CBR_19200 
#define PLATFORM_SERIAL_COMM_BAUD_38400  CBR_38400 
#define PLATFORM_SERIAL_COMM_BAUD_56000  CBR_56000 
#define PLATFORM_SERIAL_COMM_BAUD_57600  CBR_57600 
#define PLATFORM_SERIAL_COMM_BAUD_115200 CBR_115200
#define PLATFORM_SERIAL_COMM_BAUD_128000 CBR_128000
#define PLATFORM_SERIAL_COMM_BAUD_256000 CBR_256000

#define PLATFORM_SERIAL_COMM_BITS_5 5
#define PLATFORM_SERIAL_COMM_BITS_6 6
#define PLATFORM_SERIAL_COMM_BITS_7 7
#define PLATFORM_SERIAL_COMM_BITS_8 8

#define PLATFORM_SERIAL_COMM_STOP_BITS_1  0
#define PLATFORM_SERIAL_COMM_STOP_BITS_15 1
#define PLATFORM_SERIAL_COMM_STOP_BITS_2  2

#define PLATFORM_SERIAL_COMM_PARITY_NONE 0
#define PLATFORM_SERIAL_COMM_PARITY_ODD  1
#define PLATFORM_SERIAL_COMM_PARITY_EVEN 2

#define DEFAULT_SERIAL_COMM_DEVICE_PATH ""
#define DEFAULT_SERIAL_COMM_DEVICE_NAME_BASE "COM"
#define DEFAULT_SERIAL_COMM_DEVICE_NUMBER 1

#define DEFAULT_SERIAL_COMM_DEVICE_NAME \
    DEFAULT_SERIAL_COMM_DEVICE_NAME_BASE \
    SERIAL_COMM_DEVICE_NUMBER(DEFAULT_SERIAL_COMM_DEVICE_NUMBER) 

#define DEFAULT_SERIAL_COMM_DEVICE_PATHNAME \
    DEFAULT_SERIAL_COMM_DEVICE_NAME ":"
/* ...
 * Windows
 */
#else /* defined(WINDOWS) */
/* Unix
 * ...
 */
#if defined(MACOSX)
/* Mac OSX
 * ...
 */
#include <termios.h>
/* ...
 * Mac OSX
 */
#else /* defined(MACOSX) */
#include <termio.h>
#define PLATFORM_SERIAL_COMM_BAUD_56000  B56000 
#define PLATFORM_SERIAL_COMM_BAUD_128000 B128000
#define PLATFORM_SERIAL_COMM_BAUD_256000 B256000

#define DEFAULT_SERIAL_COMM_DEVICE_PATH "/dev/"
#define DEFAULT_SERIAL_COMM_DEVICE_NAME_BASE "ttyS"
#define DEFAULT_SERIAL_COMM_DEVICE_NUMBER 0

#define DEFAULT_SERIAL_COMM_DEVICE_NAME \
    DEFAULT_SERIAL_COMM_DEVICE_NAME_BASE \
    SERIAL_COMM_DEVICE_NUMBER(DEFAULT_SERIAL_COMM_DEVICE_NUMBER) 

#define DEFAULT_SERIAL_COMM_DEVICE_PATHNAME \
    DEFAULT_SERIAL_COMM_DEVICE_PATH \
    DEFAULT_SERIAL_COMM_DEVICE_NAME 
#endif /* defined(MACOSX) */
#define PLATFORM_SERIAL_COMM_BAUD_110    B110   
#define PLATFORM_SERIAL_COMM_BAUD_300    B300   
#define PLATFORM_SERIAL_COMM_BAUD_600    B600   
#define PLATFORM_SERIAL_COMM_BAUD_1200   B1200  
#define PLATFORM_SERIAL_COMM_BAUD_2400   B2400  
#define PLATFORM_SERIAL_COMM_BAUD_4800   B4800  
#define PLATFORM_SERIAL_COMM_BAUD_9600   B9600  
#define PLATFORM_SERIAL_COMM_BAUD_14400  B14400 
#define PLATFORM_SERIAL_COMM_BAUD_19200  B19200 
#define PLATFORM_SERIAL_COMM_BAUD_38400  B38400 
#define PLATFORM_SERIAL_COMM_BAUD_57600  B57600 
#define PLATFORM_SERIAL_COMM_BAUD_115200 B115200

#define PLATFORM_SERIAL_COMM_BITS_5 CS5
#define PLATFORM_SERIAL_COMM_BITS_6 CS6
#define PLATFORM_SERIAL_COMM_BITS_7 CS7
#define PLATFORM_SERIAL_COMM_BITS_8 CS8

#define PLATFORM_SERIAL_COMM_STOP_BITS_1  0
#define PLATFORM_SERIAL_COMM_STOP_BITS_2  CSTOPB

#define PLATFORM_SERIAL_COMM_PARITY_NONE 0
#define PLATFORM_SERIAL_COMM_PARITY_ODD  PARENB | PARODD
#define PLATFORM_SERIAL_COMM_PARITY_EVEN PARENB

/* ...
 * Unix
 */
#endif /* defined(WINDOWS) */

#define DEFAULT_SERIAL_COMM_BAUD      PLATFORM_SERIAL_COMM_BAUD_19200
#define DEFAULT_SERIAL_COMM_PARITY    PLATFORM_SERIAL_COMM_PARITY_NONE
#define DEFAULT_SERIAL_COMM_BITS      PLATFORM_SERIAL_COMM_BITS_8
#define DEFAULT_SERIAL_COMM_STOP_BITS PLATFORM_SERIAL_COMM_STOP_BITS_1

#define DEFAULT_SERIAL_COMM_RTSCTS_FLOW_ON false
#define DEFAULT_SERIAL_COMM_XONXOFF_FLOW_ON false

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#if defined(WINDOWS) 
/* Windows
 */
#else /* defined(WINDOWS) */
/* Unix
 */
#endif /* defined(WINDOWS) */

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* _CPLATFORM_SERIAL_COMM_H */

########################################################################
# Copyright (c) 1988-2014 $organization$
#
# This software is provided by the author and contributors ``as is'' 
# and any express or implied warranties, including, but not limited to, 
# the implied warranties of merchantability and fitness for a particular 
# purpose are disclaimed. In no event shall the author or contributors 
# be liable for any direct, indirect, incidental, special, exemplary, 
# or consequential damages (including, but not limited to, procurement 
# of substitute goods or services; loss of use, data, or profits; or 
# business interruption) however caused and on any theory of liability, 
# whether in contract, strict liability, or tort (including negligence 
# or otherwise) arising in any way out of the use of this software, 
# even if advised of the possibility of such damage.
#
#   File: XosHello.pro
#
# Author: $author$
#   Date: 5/14/2014
########################################################################
include(../../../../QtCreator/lib/libXosCore.pri)

TARGET = XosHello

INCLUDEPATH += \
$${libXosCore_INCLUDEPATH} \

DEFINES += \
$${libXosCore_DEFINES} \

HEADERS += \
$${XOS_SRC}/app/console/Hello/Hello.hpp \

SOURCES += \
$${XOS_SRC}/app/console/Hello/Hello.cpp \
$${XOS_SRC}/xos/os/Main_main.cpp \

LIBS += \
$${libXosCore_LIBS} \
-lpthread \
-ldl \
########################################################################
# Copyright (c) 1988-2025 $organization$
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
#   File: c.pri
#
# Author: $author$
#   Date: 11/17/2025
#
# generic QtCreator project .pri file for framework c
########################################################################

OTHER_RPO = ../../../../../../..
OTHER_PKG = ../../../../../..
OTHER_PRJ = ../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/source/$${THIRDPARTY_NAME}


########################################################################
# c
C_NAME = c
C_SOURCE = src
C_CREDS = crd

C_PKG = ../../../../..
C_BLD = ../..

C_PRJ = $${C_PKG}
C_BIN = $${C_BLD}/bin
C_LIB = $${C_BLD}/lib
C_SRC = $${C_PKG}/$${C_SOURCE}
C_CRD_SRC = $${C_PKG}/$${C_CREDS}/$${C_SOURCE}
SRC = $${C_SRC}
LIB = $${C_LIB}

# c BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
c_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
c_DEFINES += RELEASE_BUILD
}

# c INCLUDEPATH
#
c_INCLUDEPATH += \
$${C_SRC} \
$${C_CRD_SRC} \
$${SRC}/clib/cimage \
$${C_SRC}/clib/cos/cplatform \
$${C_SRC}/clib/cos \
$${C_SRC}/clib/cbase \
$${build_c_INCLUDEPATH} \

# c DEFINES
#
c_DEFINES += \
$${build_c_DEFINES} \

# c LIBS
#
c_LIBS += \
-L$${C_LIB}/lib$${C_NAME} \
-l$${C_NAME} \

########################################################################
# c qt INCLUDEPATH
#
c_qt_INCLUDEPATH += \
$${C_SRC}/capp/cqt/cqtmd5 \
$${C_SRC}/clib/cqt \
$${C_SRC}/clib/ccrypto \
$${c_INCLUDEPATH} \

# c qt LIBS
#
c_qt_LIBS += \
$${c_LIBS} \

########################################################################
# c x11 INCLUDEPATH
#
c_x11_INCLUDEPATH += \
$${c_INCLUDEPATH} \
$${SRC}/clib/cx11/cxm/cplatform \
$${SRC}/clib/cx11/cxm \
$${SRC}/clib/cx11/cplatform \
$${SRC}/clib/cx11 \
$${SRC}/clib/cimage/cx11 \
${HOME}/source/thirdparty/OpenMotif21/include \
/usr/X11/include \

# c x11 DEFINES
#
c_x11_DEFINES += \
$${c_DEFINES} \

# c x11 LIBS
#
c_x11_LIBS += \
$${c_LIBS} \

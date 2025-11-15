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
#   File: libcx11.pro
#
# Author: $author$
#   Date: 10/17/2025
#
# os specific QtCreator project .pro file for framework c static library libcx11
########################################################################
#
# Debug: c/build/os/QtCreator/Debug/lib/libcx11
# Release: c/build/os/QtCreator/Release/lib/libcx11
# Profile: c/build/os/QtCreator/Profile/lib/libcx11
#
include(../../../../../build/QtCreator/c.pri)
include(../../../../QtCreator/c.pri)
include(../../c.pri)
include(../../../../QtCreator/lib/libcx11/libcx11.pri)

TARGET = $${libcx11_TARGET}
TEMPLATE = $${libcx11_TEMPLATE}
CONFIG += $${libcx11_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libcx11_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libcx11_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libcx11_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libcx11_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libcx11_HEADERS} \
$${libcx11_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libcx11_SOURCES} \

########################################################################

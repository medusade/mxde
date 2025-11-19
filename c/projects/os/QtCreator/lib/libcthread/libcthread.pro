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
#   File: libcthread.pro
#
# Author: $author$
#   Date: 11/17/2025
#
# os specific QtCreator project .pro file for framework c static library libcthread
########################################################################
#
# Debug: c/build/os/QtCreator/Debug/lib/libcthread
# Release: c/build/os/QtCreator/Release/lib/libcthread
# Profile: c/build/os/QtCreator/Profile/lib/libcthread
#
include(../../../../../build/QtCreator/c.pri)
include(../../../../QtCreator/c.pri)
include(../../c.pri)
include(../../../../QtCreator/lib/libcthread/libcthread.pri)

TARGET = $${libcthread_TARGET}
TEMPLATE = $${libcthread_TEMPLATE}
CONFIG += $${libcthread_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libcthread_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libcthread_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libcthread_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libcthread_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libcthread_HEADERS} \
$${libcthread_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libcthread_SOURCES} \

########################################################################

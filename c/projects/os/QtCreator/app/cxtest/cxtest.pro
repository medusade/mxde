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
#   File: cxtest.pro
#
# Author: $author$
#   Date: 10/17/2025
#
# os specific QtCreator project .pro file for framework c executable cxtest
########################################################################
#
# Debug: c/build/os/QtCreator/Debug/bin/cxtest
# Release: c/build/os/QtCreator/Release/bin/cxtest
# Profile: c/build/os/QtCreator/Profile/bin/cxtest
#
include(../../../../../build/QtCreator/c.pri)
include(../../../../QtCreator/c.pri)
include(../../c.pri)
include(../../../../QtCreator/app/cxtest/cxtest.pri)

TARGET = $${cxtest_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${cxtest_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${cxtest_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${cxtest_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${cxtest_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${cxtest_HEADERS} \
$${cxtest_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${cxtest_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${cxtest_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${cxtest_LIBS} \
$${FRAMEWORKS} \

########################################################################

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
#   File: cqtmd5.pro
#
# Author: $author$
#   Date: 11/17/2025
#
# os specific QtCreator project .pro file for framework c executable cqtmd5
########################################################################
#
# Debug: c/build/os/QtCreator/Debug/bin/cqtmd5
# Release: c/build/os/QtCreator/Release/bin/cqtmd5
# Profile: c/build/os/QtCreator/Profile/bin/cqtmd5
#
include(../../../../../build/QtCreator/c.pri)
include(../../../../QtCreator/c.pri)
include(../../c.pri)
include(../../../../QtCreator/app/cqtmd5/cqtmd5.pri)

TARGET = $${cqtmd5_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${cqtmd5_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${cqtmd5_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${cqtmd5_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${cqtmd5_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${cqtmd5_HEADERS} \
$${cqtmd5_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${cqtmd5_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${cqtmd5_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${cqtmd5_LIBS} \
$${FRAMEWORKS} \

########################################################################


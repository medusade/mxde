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
#   File: cqtmd5.pri
#
# Author: $author$
#   Date: 11/17/2025
#
# generic QtCreator project .pri file for framework c executable cqtmd5
########################################################################

########################################################################
# cqtmd5

# cqtmd5 TARGET
#
cqtmd5_TARGET = cqtmd5

# cqtmd5 INCLUDEPATH
#
cqtmd5_INCLUDEPATH += \
$${c_qt_INCLUDEPATH} \

# cqtmd5 DEFINES
#
cqtmd5_DEFINES += \
$${c_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# cqtmd5 OBJECTIVE_HEADERS
#
#cqtmd5_OBJECTIVE_HEADERS += \
#$${C_SRC}/xos/app/console/cqtmd5/main.hh \

# cqtmd5 OBJECTIVE_SOURCES
#
#cqtmd5_OBJECTIVE_SOURCES += \
#$${C_SRC}/xos/app/console/cqtmd5/main.mm \

########################################################################
# cqtmd5 HEADERS
#
cqtmd5_HEADERS += \
$${C_SRC}/clib/ccrypto/cmd5.hxx \
\
$${C_SRC}/capp/cqt/cqtmd5/cQtMD5Main.hpp \
$${C_SRC}/capp/cqt/cqtmd5/cQtMD5MainWindow.hpp \

# cqtmd5 SOURCES
#
cqtmd5_SOURCES += \
$${C_SRC}/clib/ccrypto/cmd5.cxx \
$${C_SRC}/clib/cos/main.cxx \
\
$${C_SRC}/capp/cqt/cqtmd5/cQtMD5Main.cpp \
$${C_SRC}/capp/cqt/cqtmd5/cQtMD5MainWindow.cpp \

########################################################################
# cqtmd5 FRAMEWORKS
#
cqtmd5_FRAMEWORKS += \
$${c_qt_FRAMEWORKS} \

# cqtmd5 LIBS
#
cqtmd5_LIBS += \
$${c_qt_LIBS} \

########################################################################
# NO Qt
#QT -= gui core

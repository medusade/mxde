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
#   File: cxtest.pri
#
# Author: $author$
#   Date: 10/17/2025
#
# generic QtCreator project .pri file for framework c executable cxtest
########################################################################

########################################################################
# cxtest

# cxtest TARGET
#
cxtest_TARGET = cxtest

# cxtest INCLUDEPATH
#
cxtest_INCLUDEPATH += \
$${c_x11_INCLUDEPATH} \

# cxtest DEFINES
#
cxtest_DEFINES += \
$${c_x11_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# cxtest OBJECTIVE_HEADERS
#
#cxtest_OBJECTIVE_HEADERS += \
#$${C_SRC}/xos/app/console/cxtest/main.hh \

# cxtest OBJECTIVE_SOURCES
#
#cxtest_OBJECTIVE_SOURCES += \
#$${C_SRC}/xos/app/console/cxtest/main.mm \

########################################################################
# cxtest HEADERS
#
cxtest_HEADERS += \
$$SRC/clib/cos/argmain.hxx \
$$SRC/clib/cos/cmainargs.hxx \
$$SRC/clib/cx11/cxmain.hxx \
$$SRC/clib/cx11/cxmainargs.hxx \
$$SRC/capp/cx11/cxtest/cxtestmain.hxx \
$$SRC/capp/cx11/cxtest/cxtestmainwindow.hxx \

# cxtest SOURCES
#
cxtest_SOURCES += \
$$SRC/clib/cos/argmain.cxx \
$$SRC/clib/cos/cmainargs.cxx \
$$SRC/clib/cx11/cxmain.cxx \
$$SRC/clib/cx11/cxmainargs.cxx \
$$SRC/capp/cx11/cxtest/cxtestmain.cxx \
$$SRC/capp/cx11/cxtest/cxtestmainwindow.cxx \

########################################################################
# cxtest FRAMEWORKS
#
cxtest_FRAMEWORKS += \
$${c_x11_FRAMEWORKS} \

# cxtest LIBS
#
cxtest_LIBS += \
$${c_x11_LIBS} \

########################################################################
# NO Qt
QT -= gui core

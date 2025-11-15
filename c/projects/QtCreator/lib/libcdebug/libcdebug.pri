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
#   File: libcdebug.pri
#
# Author: $author$
#   Date: 10/17/2025
#
# generic QtCreator project .pri file for framework c static library libcdebug
########################################################################

########################################################################
# libcdebug
XOS_LIB_CDEBUG_VERSION_BUILD_DATE = 10/17/2025 #$$system(~/bin/utility/tdate)

# libcdebug TARGET
#
libcdebug_TARGET = cdebug
libcdebug_TEMPLATE = lib
libcdebug_CONFIG += staticlib

# libcdebug INCLUDEPATH
#
libcdebug_INCLUDEPATH += \
$${c_INCLUDEPATH} \
$$SRC/clib/cos/cplatform \
$$SRC/clib/cos \
$$SRC/clib/cbase \

# libcdebug DEFINES
#
libcdebug_DEFINES += \
$${c_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_CDEBUG_VERSION_BUILD_DATE=$${XOS_LIB_CDEBUG_VERSION_BUILD_DATE} \

########################################################################
# libcdebug OBJECTIVE_HEADERS
#
#libcdebug_OBJECTIVE_HEADERS += \
#$${C_SRC}/xos/lib/cdebug/version.hh \

# libcdebug OBJECTIVE_SOURCES
#
#libcdebug_OBJECTIVE_SOURCES += \
#$${C_SRC}/xos/lib/cdebug/version.mm \

########################################################################
# libcdebug HEADERS
#
libcdebug_HEADERS += \
$$SRC/clib/cbase/cdebug.hxx \

# libcdebug SOURCES
#
libcdebug_SOURCES += \
$$SRC/clib/cbase/cdebug.cxx \

########################################################################

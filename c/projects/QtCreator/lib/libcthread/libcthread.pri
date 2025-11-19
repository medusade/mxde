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
#   File: libcthread.pri
#
# Author: $author$
#   Date: 11/17/2025
#
# generic QtCreator project .pri file for framework c static library libcthread
########################################################################

########################################################################
# libcthread
XOS_LIB_CTHREAD_VERSION_BUILD_DATE = 11/17/2025 #$$system(~/bin/utility/tdate)

# libcthread TARGET
#
libcthread_TARGET = cthread
libcthread_TEMPLATE = lib
libcthread_CONFIG += staticlib

# libcthread INCLUDEPATH
#
libcthread_INCLUDEPATH += \
$${c_INCLUDEPATH} \

# libcthread DEFINES
#
libcthread_DEFINES += \
$${c_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_CTHREAD_VERSION_BUILD_DATE=$${XOS_LIB_CTHREAD_VERSION_BUILD_DATE} \

########################################################################
# libcthread OBJECTIVE_HEADERS
#
#libcthread_OBJECTIVE_HEADERS += \
#$${C_SRC}/xos/lib/cthread/version.hh \

# libcthread OBJECTIVE_SOURCES
#
#libcthread_OBJECTIVE_SOURCES += \
#$${C_SRC}/xos/lib/cthread/version.mm \

########################################################################
# libcthread HEADERS
#
libcthread_HEADERS += \
$${SRC}/clib/cos/cthread/cmutexattached.hxx \
$${SRC}/clib/cos/cthread/cmutexinterface.hxx \
$${SRC}/clib/cos/cthread/cmutex.hxx \
$${SRC}/clib/cos/cthread/csemaphoreattached.hxx \
$${SRC}/clib/cos/cthread/csemaphoreinterface.hxx \
$${SRC}/clib/cos/cthread/csemaphore.hxx \

# libcthread SOURCES
#
libcthread_SOURCES += \
$${SRC}/clib/cos/cthread/cmutexattached.cxx \
$${SRC}/clib/cos/cthread/cmutexinterface.cxx \
$${SRC}/clib/cos/cthread/cmutex.cxx \
$${SRC}/clib/cos/cthread/csemaphoreattached.cxx \
$${SRC}/clib/cos/cthread/csemaphoreinterface.cxx \
$${SRC}/clib/cos/cthread/csemaphore.cxx \

########################################################################

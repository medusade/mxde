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
# os specific QtCreator project file for framework c
########################################################################

UNAME = $$system(uname)

contains(UNAME,Darwin) {
DARWIN_VERSION = $$system(sw_vers -productVersion)
} else {
contains(UNAME,Linux) {
LINUX_VERSION = $$system(uname -r)
} else {
contains(UNAME,Windows) {
WINDOWS_VERSION = $$system(ver)
} else {
} # contains(UNAME,Windows)
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(UNAME,Darwin) {
DARWIN_VERSION_NUMBER = $$system(echo $${DARWIN_VERSION} | cut -d'.' -f1)
contains(DARWIN_VERSION_NUMBER,15) {
DARWIN_VERSION_NAME = Sequoia
} else {
contains(DARWIN_VERSION_NUMBER,14) {
DARWIN_VERSION_NAME = Sonoma
} else {
contains(DARWIN_VERSION_NUMBER,13) {
DARWIN_VERSION_NAME = Ventura
} else {
contains(DARWIN_VERSION_NUMBER,12) {
DARWIN_VERSION_NAME = Monterey
} else {
contains(DARWIN_VERSION_NUMBER,11) {
DARWIN_VERSION_NAME = Bigsur
} else {
contains(DARWIN_VERSION_NUMBER,10) {
DARWIN_VERSION_NAME = Sierra
} else {
DARWIN_VERSION_NAME = Mavricks
} # contains(DARWIN_VERSION,10)
} # contains(DARWIN_VERSION,11)
} # contains(DARWIN_VERSION,12)
} # contains(DARWIN_VERSION,13)
} # contains(DARWIN_VERSION,14)
} # contains(DARWIN_VERSION,15)
} # contains(UNAME,Darwin)

contains(UNAME,Darwin) {
C_OS = macosx
} else {
contains(UNAME,Linux) {
C_OS = linux
} else {
C_OS = windows
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(BUILD_OS,C_OS) {
C_BUILD = $${C_OS}
} else {
C_BUILD = $${BUILD_OS}
} # contains(BUILD_OS,C_OS)

contains(BUILD_CPP_VERSION,10) {
CONFIG += c++0x
} else {
contains(BUILD_CPP_VERSION,98|03|11|14|17) {
CONFIG += c++$${BUILD_CPP_VERSION}
} else {
} # contains(BUILD_CPP_VERSION,98|03|11|14|17)
} # contains(BUILD_CPP_VERSION,10)

contains(C_OS,macosx) {
contains(DARWIN_VERSION_NUMBER,15) {
#QMAKE_CXXFLAGS += -Werror -Wno-error=register
QMAKE_CXXFLAGS += -Wno-register
} else {
} # contains(DARWIN_VERSION_NUMBER,15)
contains(DARWIN_VERSION_NUMBER,14) {
QMAKE_CXXFLAGS += -Wno-dynamic-exception-spec
} else {
} # contains(DARWIN_VERSION_NUMBER,14)
contains(DARWIN_VERSION_NUMBER,11|12|13|14|15) {
QMAKE_CFLAGS += -Wno-implicit-function-declaration
} else {
} # contains(DARWIN_VERSION_NUMBER,11|12|13|14|15)
} else {
contains(C_OS,linux) {
QMAKE_CXXFLAGS += -fpermissive
} else {
contains(C_OS,windows) {
} else {
} # contains(C_OS,windows)
} # contains(C_OS,linux)
} # contains(C_OS,macosx)
########################################################################
# c

# c INCLUDEPATH
#
c_INCLUDEPATH += \

# c DEFINES
#
c_DEFINES += \

# qt FRAMEWORKS
#
contains(UNAME,Darwin) {
lessThan(QT_MAJOR_VERSION, 5) {
qt_FRAMEWORKS += -framework QtGui
} else {
qt_FRAMEWORKS += -framework QtWidgets
} # lessThan(QT_MAJOR_VERSION, 5)
} else {
} # contains(UNAME,Darwin)

# c os LIBS
#
contains(C_OS,macosx|linux) {
c_os_LIBS += \
-lpthread \
-ldl
} else {
} # contains(C_OS,macosx|linux)

contains(C_OS,linux) {
c_os_LIBS += \
-lrt
} else {
} # contains(C_OS,linux)


# c base LIBS
#
c_base_LIBS += \
-L$${LIB}/libcos \
-lcos \
-L$${LIB}/libcdebug \
-lcdebug \
-L$${LIB}/libcbase \
-lcbase \


# c LIBS
#
c_LIBS += \
$${c_base_LIBS} \
$${build_c_LIBS} \
$${c_os_LIBS} \

########################################################################
# c qt LIBS
#
c_qt_LIBS += \
$${qt_FRAMEWORKS} \
$${c_LIBS} \

########################################################################
# c x11 LIBS
#
c_x11_LIBS += \
$${c_base_LIBS} \
-L$${LIB}/libcx11 \
-lcx11 \
-L${HOME}/source/thirdparty/OpenMotif21/lib \
-L/usr/X11/lib \
-lX11 \
-lXpm \
-lXext \
$${build_c_LIBS} \
$${c_os_LIBS} \

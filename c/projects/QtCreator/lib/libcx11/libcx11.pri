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
#   File: libcx11.pri
#
# Author: $author$
#   Date: 11/17/2025
#
# generic QtCreator project .pri file for framework c static library libcx11
########################################################################

########################################################################
# libcx11
XOS_LIB_CX11_VERSION_BUILD_DATE = 11/17/2025 #$$system(~/bin/utility/tdate)

# libcx11 TARGET
#
libcx11_TARGET = cx11
libcx11_TEMPLATE = lib
libcx11_CONFIG += staticlib

# libcx11 INCLUDEPATH
#
libcx11_INCLUDEPATH += \
$${c_x11_INCLUDEPATH} \

# libcx11 DEFINES
#
libcx11_DEFINES += \
$${c_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_CX11_VERSION_BUILD_DATE=$${XOS_LIB_CX11_VERSION_BUILD_DATE} \

########################################################################
# libcx11 OBJECTIVE_HEADERS
#
#libcx11_OBJECTIVE_HEADERS += \
#$${C_SRC}/xos/lib/cx11/version.hh \

# libcx11 OBJECTIVE_SOURCES
#
#libcx11_OBJECTIVE_SOURCES += \
#$${C_SRC}/xos/lib/cx11/version.mm \

########################################################################
# libcx11 HEADERS
#
libcx11_HEADERS += \
$${SRC}/clib/cx11/cxbase.hxx \
$${SRC}/clib/cx11/cxbaseinterface.hxx \
$${SRC}/clib/cx11/cxeventtarget.hxx \
$${SRC}/clib/cx11/cxeventtargetinterface.hxx \
$${SRC}/clib/cx11/cxrectangle.hxx \
$${SRC}/clib/cx11/cxmaininterface.hxx \
$${SRC}/clib/cx11/cxwindowmain.hxx \
$${SRC}/clib/cx11/cxwindowmaininterface.hxx \
$${SRC}/clib/cx11/cxwindow.hxx \
$${SRC}/clib/cx11/cxwindowattached.hxx \
$${SRC}/clib/cx11/cxwindowcreated.hxx \
$${SRC}/clib/cx11/cxwindowinterface.hxx \
$${SRC}/clib/cx11/cxgc.hxx \
$${SRC}/clib/cx11/cxgcattached.hxx \
$${SRC}/clib/cx11/cxgcinterface.hxx \
$${SRC}/clib/cx11/cxgetgc.hxx \
$${SRC}/clib/cx11/cxgetgcinterface.hxx \
$${SRC}/clib/cx11/cxdrawableattached.hxx \
$${SRC}/clib/cx11/cxregion.hxx \
$${SRC}/clib/cx11/cxregionattached.hxx \
$${SRC}/clib/cx11/cxregioninterface.hxx \
$${SRC}/clib/cx11/cxobject.hxx \
$${SRC}/clib/cx11/cxobjectinterface.hxx \
$${SRC}/clib/cx11/cxcolor.hxx \
$${SRC}/clib/cx11/cxcolorinterface.hxx \
$${SRC}/clib/cx11/cxcolormap.hxx \
$${SRC}/clib/cx11/cxcolormapattached.hxx \
$${SRC}/clib/cx11/cxcolormapinterface.hxx \
$${SRC}/clib/cx11/cxpixel.hxx \
$${SRC}/clib/cx11/cxpixelattached.hxx \
$${SRC}/clib/cx11/cxpixelinterface.hxx \
$${SRC}/clib/cx11/cxatom.hxx \
$${SRC}/clib/cx11/cxatomattached.hxx \
$${SRC}/clib/cx11/cxatominterface.hxx \
$${SRC}/clib/cx11/cxmwmhints.hxx \
$${SRC}/clib/cx11/cxmwmhintsinterface.hxx \
$${SRC}/clib/cx11/cxproperty.hxx \
$${SRC}/clib/cx11/cxpropertyinterface.hxx \
$${SRC}/clib/cx11/cxpixmap.hxx \
$${SRC}/clib/cx11/cxpixmapattached.hxx \
$${SRC}/clib/cx11/cxpixmapinterface.hxx \
$${SRC}/clib/cx11/cxpm.hxx \
$${SRC}/clib/cx11/cxpmimage.hxx \
$${SRC}/clib/cx11/cxpmimageinterface.hxx \
$${SRC}/clib/cx11/cxpminfo.hxx \
$${SRC}/clib/cx11/cxpminfointerface.hxx \
$${SRC}/clib/cx11/cxpminterface.hxx \
$${SRC}/clib/cimage/cx11/cximage.hxx \
$${SRC}/clib/cimage/cx11/cximagebase.hxx \
$${SRC}/clib/cimage/cx11/cximagebaseinterface.hxx \
$${SRC}/clib/cimage/cx11/cximagecolor.hxx \
$${SRC}/clib/cimage/cx11/cximageinterface.hxx \
$${SRC}/clib/cimage/cx11/cximageobject.hxx \
$${SRC}/clib/cx11/cxfont.hxx \
$${SRC}/clib/cx11/cxfontattached.hxx \
$${SRC}/clib/cx11/cxfontinterface.hxx \
$${SRC}/clib/cx11/cxfontstruct.hxx \
$${SRC}/clib/cx11/cxfontstructattached.hxx \
$${SRC}/clib/cx11/cxfontstructinterface.hxx \
$${SRC}/clib/cx11/cxdisplay.hxx \
$${SRC}/clib/cx11/cxdisplayattached.hxx \
$${SRC}/clib/cx11/cxdisplayinterface.hxx \
$${SRC}/clib/cx11/cxdisplayopened.hxx \

# libcx11 SOURCES
#
libcx11_SOURCES += \
$${SRC}/clib/cx11/cxbase.cxx \
$${SRC}/clib/cx11/cxbaseinterface.cxx \
$${SRC}/clib/cx11/cxeventtarget.cxx \
$${SRC}/clib/cx11/cxeventtargetinterface.cxx \
$${SRC}/clib/cx11/cxrectangle.cxx \
$${SRC}/clib/cx11/cxmaininterface.cxx \
$${SRC}/clib/cx11/cxwindowmain.cxx \
$${SRC}/clib/cx11/cxwindowmaininterface.cxx \
$${SRC}/clib/cx11/cxwindow.cxx \
$${SRC}/clib/cx11/cxwindowattached.cxx \
$${SRC}/clib/cx11/cxwindowcreated.cxx \
$${SRC}/clib/cx11/cxwindowinterface.cxx \
$${SRC}/clib/cx11/cxgc.cxx \
$${SRC}/clib/cx11/cxgcattached.cxx \
$${SRC}/clib/cx11/cxgcinterface.cxx \
$${SRC}/clib/cx11/cxgetgc.cxx \
$${SRC}/clib/cx11/cxgetgcinterface.cxx \
$${SRC}/clib/cx11/cxdrawableattached.cxx \
$${SRC}/clib/cx11/cxregion.cxx \
$${SRC}/clib/cx11/cxregionattached.cxx \
$${SRC}/clib/cx11/cxregioninterface.cxx \
$${SRC}/clib/cx11/cxobject.cxx \
$${SRC}/clib/cx11/cxobjectinterface.cxx \
$${SRC}/clib/cx11/cxcolor.cxx \
$${SRC}/clib/cx11/cxcolorinterface.cxx \
$${SRC}/clib/cx11/cxcolormap.cxx \
$${SRC}/clib/cx11/cxcolormapattached.cxx \
$${SRC}/clib/cx11/cxcolormapinterface.cxx \
$${SRC}/clib/cx11/cxpixel.cxx \
$${SRC}/clib/cx11/cxpixelattached.cxx \
$${SRC}/clib/cx11/cxpixelinterface.cxx \
$${SRC}/clib/cx11/cxatom.cxx \
$${SRC}/clib/cx11/cxatomattached.cxx \
$${SRC}/clib/cx11/cxatominterface.cxx \
$${SRC}/clib/cx11/cxmwmhints.cxx \
$${SRC}/clib/cx11/cxmwmhintsinterface.cxx \
$${SRC}/clib/cx11/cxproperty.cxx \
$${SRC}/clib/cx11/cxpropertyinterface.cxx \
$${SRC}/clib/cx11/cxpixmap.cxx \
$${SRC}/clib/cx11/cxpixmapattached.cxx \
$${SRC}/clib/cx11/cxpixmapinterface.cxx \
$${SRC}/clib/cx11/cxpm.cxx \
$${SRC}/clib/cx11/cxpmimage.cxx \
$${SRC}/clib/cx11/cxpmimageinterface.cxx \
$${SRC}/clib/cx11/cxpminfo.cxx \
$${SRC}/clib/cx11/cxpminfointerface.cxx \
$${SRC}/clib/cx11/cxpminterface.cxx \
$${SRC}/clib/cimage/cx11/cximage.cxx \
$${SRC}/clib/cimage/cx11/cximagebase.cxx \
$${SRC}/clib/cimage/cx11/cximagebaseinterface.cxx \
$${SRC}/clib/cimage/cx11/cximagecolor.cxx \
$${SRC}/clib/cimage/cx11/cximageinterface.cxx \
$${SRC}/clib/cimage/cx11/cximageobject.cxx \
$${SRC}/clib/cx11/cxfont.cxx \
$${SRC}/clib/cx11/cxfontattached.cxx \
$${SRC}/clib/cx11/cxfontinterface.cxx \
$${SRC}/clib/cx11/cxfontstruct.cxx \
$${SRC}/clib/cx11/cxfontstructattached.cxx \
$${SRC}/clib/cx11/cxfontstructinterface.cxx \
$${SRC}/clib/cx11/cxdisplay.cxx \
$${SRC}/clib/cx11/cxdisplayattached.cxx \
$${SRC}/clib/cx11/cxdisplayinterface.cxx \
$${SRC}/clib/cx11/cxdisplayopened.cxx \

########################################################################

///////////////////////////////////////////////////////////////////////
// Copyright (c) 1988-2011 $organization$
//
// This software is provided by the author and contributors ``as is'' 
// and any express or implied warranties, including, but not limited to, 
// the implied warranties of merchantability and fitness for a particular 
// purpose are disclaimed. In no event shall the author or contributors 
// be liable for any direct, indirect, incidental, special, exemplary, 
// or consequential damages (including, but not limited to, procurement 
// of substitute goods or services; loss of use, data, or profits; or 
// business interruption) however caused and on any theory of liability, 
// whether in contract, strict liability, or tort (including negligence 
// or otherwise) arising in any way out of the use of this software, 
// even if advised of the possibility of such damage.
//
//   File: WinMainWindowMain.hpp
//
// Author: $author$
//   Date: 11/28/2011
///////////////////////////////////////////////////////////////////////
#ifndef _WINMAINWINDOWMAIN_HPP
#define _WINMAINWINDOWMAIN_HPP

#include "WinMainWindow.hpp"
#include "cwinroundedframewindowmain.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif // defined(c_NAMESPACE) 

///////////////////////////////////////////////////////////////////////
// Typedef: WinMainWindowMainExtend
//
//  Author: $author$
//    Date: 11/28/2011
///////////////////////////////////////////////////////////////////////
typedef cWinRoundedFrameWindowMain
WinMainWindowMainExtend;
///////////////////////////////////////////////////////////////////////
//  Class: WinMainWindowMain
//
// Author: $author$
//   Date: 11/28/2011
///////////////////////////////////////////////////////////////////////
class c_EXPORT_CLASS WinMainWindowMain
: public WinMainWindowMainExtend
{
public:
    typedef WinMainWindowMainExtend Extends;
    ///////////////////////////////////////////////////////////////////////
    //  Function: GetMainWindow
    //
    //    Author: $author$
    //      Date: 11/26/2011
    ///////////////////////////////////////////////////////////////////////
    virtual WinMainWindow& GetTheMainWindow() const = 0;
    ///////////////////////////////////////////////////////////////////////
    //  Function: GetMainWindow
    //
    //    Author: $author$
    //      Date: 11/26/2011
    ///////////////////////////////////////////////////////////////////////
    virtual cWinRoundedFrameWindowMainWindow& GetMainWindow() const
    {
        return (cWinRoundedFrameWindowMainWindow&)(GetTheMainWindow());
    }
};


#if defined(c_NAMESPACE)
}
#endif // defined(c_NAMESPACE) 

#endif // _WINMAINWINDOWMAIN_HPP 

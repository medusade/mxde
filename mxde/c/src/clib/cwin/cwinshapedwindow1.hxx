/**
 **********************************************************************
 * Copyright (c) 1988-2009 $organization$
 *
 * This software is provided by the author and contributors ``as is'' 
 * and any express or implied warranties, including, but not limited to, 
 * the implied warranties of merchantability and fitness for a particular 
 * purpose are disclaimed. In no event shall the author or contributors 
 * be liable for any direct, indirect, incidental, special, exemplary, 
 * or consequential damages (including, but not limited to, procurement 
 * of substitute goods or services; loss of use, data, or profits; or 
 * business interruption) however caused and on any theory of liability, 
 * whether in contract, strict liability, or tort (including negligence 
 * or otherwise) arising in any way out of the use of this software, 
 * even if advised of the possibility of such damage.
 *
 *   File: cwinshapedwindow.hxx
 *
 * Author: $author$
 *   Date: 12/2/2009
 **********************************************************************
 */
#if !defined(_CWINSHAPEDWINDOW_HXX) || defined(CWINSHAPEDWINDOW_MEMBERS_ONLY)
#if !defined(_CWINSHAPEDWINDOW_HXX) && !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY)
#define _CWINSHAPEDWINDOW_HXX
#endif /* !defined(_CWINSHAPEDWINDOW_HXX) && !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY) */

#if !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY)
#include "cwinncwindow.hxx"
#include "cwinwindowclass.hxx"
#include "cwinregion.hxx"
#include "cwincolorref.hxx"
#include "cwinbrush.hxx"

#define CWINSHAPEDWINDOW_BG_COLOR_R 0xFF
#define CWINSHAPEDWINDOW_BG_COLOR_G 0xFF
#define CWINSHAPEDWINDOW_BG_COLOR_B 0xDD

#define CWINSHAPEDWINDOW_BG_COLOR \
    RGB(CWINSHAPEDWINDOW_BG_COLOR_R, \
        CWINSHAPEDWINDOW_BG_COLOR_G, \
        CWINSHAPEDWINDOW_BG_COLOR_B)

#define CWINSHAPEDWINDOW_WINDOW_CLASSNAME \
    "cWinShapedWindow"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

/**
 **********************************************************************
 * Typedef: cWinShapedWindowExtends
 *
 *  Author: $author$
 *    Date: 12/2/2009
 **********************************************************************
 */
typedef cWinNCWindow
cWinShapedWindowExtends;
/**
 **********************************************************************
 *  Class: cWinShapedWindow
 *
 * Author: $author$
 *   Date: 12/2/2009
 **********************************************************************
 */
class c_EXPORT_CLASS cWinShapedWindow
: public cWinShapedWindowExtends
{
public:
    typedef cWinShapedWindowExtends cExtends;

    const TCHAR* m_windowClassNameChars;

    cWinCOLORREF m_bgColor;
    cWinBrush m_bgBrush;
    cWinRegion m_region;

    /**
     **********************************************************************
     *  Constructor: cWinShapedWindow
     *
     *       Author: $author$
     *         Date: 12/2/2009
     **********************************************************************
     */
    cWinShapedWindow
    (COLORREF bgColor=CWINSHAPEDWINDOW_BG_COLOR,
     HBRUSH hBgBrush=NULL,
     const TCHAR* windowClassNameChars=_T(CWINSHAPEDWINDOW_WINDOW_CLASSNAME),
     HINSTANCE hInstance=NULL,
     HWND attached=NULL,
     bool isCreated=false) 
    : cExtends(hInstance, attached, isCreated),
      m_windowClassNameChars(windowClassNameChars),
      m_bgColor(bgColor),
      m_bgBrush(hBgBrush)
    {
    }
    /**
     **********************************************************************
     *  Constructor: cWinShapedWindow
     *
     *       Author: $author$
     *         Date: 12/13/2009
     **********************************************************************
     */
    cWinShapedWindow
    (HRGN hRgn,
     COLORREF bgColor=CWINSHAPEDWINDOW_BG_COLOR,
     HBRUSH hBgBrush=NULL,
     const TCHAR* windowClassNameChars=_T(CWINSHAPEDWINDOW_WINDOW_CLASSNAME),
     HINSTANCE hInstance=NULL,
     HWND attached=NULL,
     bool isCreated=false) 
    : cExtends(hInstance, attached, isCreated),
      m_windowClassNameChars(windowClassNameChars),
      m_bgColor(bgColor),
      m_bgBrush(hBgBrush),
      m_region(hRgn)
    {
    }
    /**
     **********************************************************************
     *  Destructor: ~cWinShapedWindow
     *
     *      Author: $author$
     *        Date: 12/2/2009
     **********************************************************************
     */
    virtual ~cWinShapedWindow()
    {
        eError error;
        if ((error = Destroyed()))
            throw(error);
    }
#else /* !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY) */

    /**
     **********************************************************************
     *  Function: InitializeWindowClass
     *
     *    Author: $author$
     *      Date: 12/2/2009
     **********************************************************************
     */
    virtual eError InitializeWindowClass
    (cWinWindowClass& windowClass,
     HINSTANCE hInstance)
#if defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE)
    = 0;
#else /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    {
        eError error = e_ERROR_NONE;
#if !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT)
        TLENGTH length;
        HBRUSH hBrush;

        if (m_windowClassNameChars)
        if (0 > (length = windowClass.SetWindowClassName(m_windowClassNameChars)))
            return error = -length;

        if (!(hBrush = m_bgBrush.Attached()))
        if ((error = m_bgBrush.CreateSolid(m_bgColor.Attached())))
            return error;

        windowClass.SetBackground(m_bgBrush.Attached());
#else /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
        return error;
    }
#endif /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    /**
     **********************************************************************
     *  Function: FinalizeWindowClass
     *
     *    Author: $author$
     *      Date: 12/2/2009
     **********************************************************************
     */
    virtual eError FinalizeWindowClass
    (cWinWindowClass& windowClass,
     HINSTANCE hInstance)
#if defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE)
    = 0;
#else /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    {
        eError error = e_ERROR_NONE;
#if !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT)
        error = m_bgBrush.Destroy(true);
#else /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
        return error;
    }
#endif /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */

    /**
     **********************************************************************
     *  Function: OnSize
     *
     *    Author: $author$
     *      Date: 12/2/2009
     **********************************************************************
     */
    virtual BOOL OnSize
    (LRESULT& lResult,
     HRGN& hRgn,
     RECT& rect,
     HWND hWnd,
     UINT msg,
     WPARAM wParam,
     LPARAM lParam)
#if defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE)
    = 0;
#else /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    {
        BOOL handled = FALSE;
#if !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT)
        if (!hRgn)
        if ((hRgn = CreateWindowRegion(rect)))
        {
            lResult = DefWindowProc(hWnd,msg,wParam,lParam);
            handled = TRUE;
        }
#else /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
        return handled;
    }
#endif /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */

    /**
     **********************************************************************
     *  Function: CreateWindowRegion
     *
     *    Author: $author$
     *      Date: 12/2/2009
     **********************************************************************
     */
    virtual HRGN CreateWindowRegion
    (RECT& rect)
#if defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE)
    = 0;
#else /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    {
        HRGN hRgn = NULL;
#if !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT)
#else /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
        return hRgn;
    }
#endif /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    /**
     **********************************************************************
     *  Function: SetWindowRegion
     *
     *    Author: $author$
     *      Date: 12/13/2009
     **********************************************************************
     */
    virtual HRGN SetWindowRegion
    (HWND hWnd, HRGN hToRgn, BOOL bRedraw=TRUE)
#if defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE)
    = 0;
#else /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    {
        HRGN hRgn = NULL;
#if !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT)
        if ((hWnd) && (hToRgn))
        if (hToRgn == (m_region.Attached()))
        if ((SetWindowRgn(hWnd, hToRgn, bRedraw)))
            hRgn = m_region.Detach();
#else /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
        return hRgn;
    }
#endif /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    /**
     **********************************************************************
     *  Function: WindowRegion
     *
     *    Author: $author$
     *      Date: 12/13/2009
     **********************************************************************
     */
    virtual HRGN WindowRegion() const
#if defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE)
    = 0;
#else /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */
    {
        HRGN hRgn = NULL;
#if !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT)
        hRgn = m_region.Attached();
#else /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_IMPLEMENT) */
        return hRgn;
    }
#endif /* defined(CWINSHAPEDWINDOW_MEMBER_FUNCS_INTERFACE) */

#if !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY)
};

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY) */
#endif /* !defined(CWINSHAPEDWINDOW_MEMBERS_ONLY) */

#endif /* !defined(_CWINSHAPEDWINDOW_HXX) || defined(CWINSHAPEDWINDOW_MEMBERS_ONLY) */

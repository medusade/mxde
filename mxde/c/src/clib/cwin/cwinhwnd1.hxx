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
 *   File: cwinhwnd.hxx
 *
 * Author: $author$
 *   Date: 5/7/2009
 **********************************************************************
 */
#if !defined(_CWINHWND_HXX) || defined(CWINHWND_MEMBERS_ONLY)
#if !defined(_CWINHWND_HXX) && !defined(CWINHWND_MEMBERS_ONLY)
#define _CWINHWND_HXX
#endif /* !defined(_CWINHWND_HXX) && !defined(CWINHWND_MEMBERS_ONLY) */

#include "cwinhwndattached.hxx"
#include "ccreated.hxx"

class c_INTERFACE_CLASS cWinHWNDInterface;
/**
 **********************************************************************
 * Typedef: cWinHWNDInterfaceImplements
 *
 *  Author: $author$
 *    Date: 5/7/2009
 **********************************************************************
 */
typedef cCreatedInterfaceT
<cWinHWNDInterface, cWinHWNDAttachedInterface>
cWinHWNDInterfaceImplements;
/**
 **********************************************************************
 *  Class: cWinHWNDInterface
 *
 * Author: $author$
 *   Date: 5/7/2009
 **********************************************************************
 */
class c_INTERFACE_CLASS cWinHWNDInterface
: virtual public cWinHWNDInterfaceImplements
{
public:
    typedef cWinHWNDInterfaceImplements cImplements;
    typedef cWinHWNDInterface cDerives;
};
class c_EXPORT_CLASS cWinHWNDImplement;
/**
 **********************************************************************
 * Typedef: cWinHWNDImplementImplements
 *
 *  Author: $author$
 *    Date: 5/7/2009
 **********************************************************************
 */
typedef cCreatedImplementT
<cWinHWNDImplement, cWinHWNDInterface>
cWinHWNDImplementImplements;
/**
 **********************************************************************
 *  Class: cWinHWNDImplement
 *
 * Author: $author$
 *   Date: 5/7/2009
 **********************************************************************
 */
class c_EXPORT_CLASS cWinHWNDImplement
: virtual public cWinHWNDImplementImplements
{
public:
    typedef cWinHWNDImplementImplements cImplements;
    typedef cWinHWNDImplement cDerives;
};
class c_EXPORT_CLASS cWinHWND;
/**
 **********************************************************************
 * Typedef: cWinHWNDExtends
 *
 *  Author: $author$
 *    Date: 5/7/2009
 **********************************************************************
 */
typedef cCreatedT
<cWinHWND, 
 cWinHWNDImplement, 
 cWinHWNDAttached>
cWinHWNDExtends;
/**
 **********************************************************************
 *  Class: cWinHWND
 *
 * Author: $author$
 *   Date: 5/7/2009
 **********************************************************************
 */
class c_EXPORT_CLASS cWinHWND
: public cWinHWNDExtends
{
public:
    typedef cWinHWNDExtends cExtends;
    typedef cWinHWND cDerives;

    cWinHWND
    (HWND attached=NULL,
     bool isCreated=false) 
    : cExtends(isCreated) 
    {
        m_attached = attached;
    }
};
#endif /* !defined(_CWINHWND_HXX) || defined(CWINHWND_MEMBERS_ONLY) */

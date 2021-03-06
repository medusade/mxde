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
 *   File: cwinwindowmessagetargetinterface.hxx
 *
 * Author: $author$
 *   Date: 7/15/2009
 **********************************************************************
 */
#if !defined(_CWINWINDOWMESSAGETARGETINTERFACE_HXX) || defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY)
#if !defined(_CWINWINDOWMESSAGETARGETINTERFACE_HXX) && !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY)
#define _CWINWINDOWMESSAGETARGETINTERFACE_HXX
#endif /* !defined(_CWINWINDOWMESSAGETARGETINTERFACE_HXX) && !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY) */

#if !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY)
#include "cwininterfacebase.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

/**
 **********************************************************************
 *  Class: cWinWindowMessageTargetInterface
 *
 * Author: $author$
 *   Date: 7/15/2009
 **********************************************************************
 */
class c_INTERFACE_CLASS cWinWindowMessageTargetInterface
: virtual public cWinInterfaceBase
{
public:
    typedef cWinInterfaceBase cImplements;
#else /* !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY) */

#if !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY)
/* include cWinWindowMessageTarget member functions interface
 */
#define CWINWINDOWMESSAGETARGET_MEMBERS_ONLY
#define CWINWINDOWMESSAGETARGET_MEMBER_FUNCS_INTERFACE
#include "cwinwindowmessagetarget.hxx"
#undef CWINWINDOWMESSAGETARGET_MEMBER_FUNCS_INTERFACE
#undef CWINWINDOWMESSAGETARGET_MEMBERS_ONLY
};

class c_IMPLEMENT_CLASS cWinWindowMessageTargetImplement
: virtual public cWinWindowMessageTargetInterface
{
public:
/* include cWinWindowMessageTarget member functions implement
 */
#define CWINWINDOWMESSAGETARGET_MEMBERS_ONLY
#define CWINWINDOWMESSAGETARGET_MEMBER_FUNCS_IMPLEMENT
#include "cwinwindowmessagetarget.hxx"
#undef CWINWINDOWMESSAGETARGET_MEMBER_FUNCS_IMPLEMENT
#undef CWINWINDOWMESSAGETARGET_MEMBERS_ONLY
};

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY) */

#endif /* !defined(_CWINWINDOWMESSAGETARGETINTERFACE_HXX) || defined(CWINWINDOWMESSAGETARGETINTERFACE_MEMBERS_ONLY) */

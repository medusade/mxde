/**
 **********************************************************************
 * Copyright (c) 1988-2010 $organization$  
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
 *   File: cxtbaseinterface.hxx
 *
 * Author: $author$           
 *   Date: 5/1/2010
 **********************************************************************
 */
#if !defined(_CXTBASEINTERFACE_HXX) || defined(CXTBASEINTERFACE_MEMBERS_ONLY)
#if !defined(_CXTBASEINTERFACE_HXX) && !defined(CXTBASEINTERFACE_MEMBERS_ONLY)
#define _CXTBASEINTERFACE_HXX
#endif /* !defined(_CXTBASEINTERFACE_HXX) && !defined(CXTBASEINTERFACE_MEMBERS_ONLY) */

#if !defined(CXTBASEINTERFACE_MEMBERS_ONLY)
#include "cplatform_X11_Intrinsic.h"
#include "cxbaseinterface.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

/**
 **********************************************************************
 * Typedef: cXtBaseInterfaceImplement
 *
 *  Author: $author$           
 *    Date: 5/1/2010
 **********************************************************************
 */
typedef cXBaseInterface
cXtBaseInterfaceImplement;
/**
 **********************************************************************
 *  Class: cXtBaseInterface
 *
 * Author: $author$           
 *   Date: 5/1/2010
 **********************************************************************
 */
class c_INTERFACE_CLASS cXtBaseInterface
: virtual public cXtBaseInterfaceImplement
{
public:
    typedef cXtBaseInterfaceImplement cImplements;
#else /* !defined(CXTBASEINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CXTBASEINTERFACE_MEMBERS_ONLY) */

#if !defined(CXTBASEINTERFACE_MEMBERS_ONLY)
};

/**
 **********************************************************************
 *  Class: cXtBaseImplement
 *
 * Author: $author$           
 *   Date: 5/1/2010
 **********************************************************************
 */
class c_IMPLEMENT_CLASS cXtBaseImplement
: virtual public cXtBaseInterface
{
public:
    typedef cXtBaseInterface cImplements;
};

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CXTBASEINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CXTBASEINTERFACE_MEMBERS_ONLY) */

#endif /* !defined(_CXTBASEINTERFACE_HXX) || defined(CXTBASEINTERFACE_MEMBERS_ONLY) */
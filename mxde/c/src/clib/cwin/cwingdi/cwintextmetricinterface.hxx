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
 *   File: cwintextmetricinterface.hxx
 *
 * Author: $author$
 *   Date: 8/3/2010
 **********************************************************************
 */
#if !defined(_CWINTEXTMETRICINTERFACE_HXX) || defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY)
#if !defined(_CWINTEXTMETRICINTERFACE_HXX) && !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY)
#define _CWINTEXTMETRICINTERFACE_HXX
#endif /* !defined(_CWINTEXTMETRICINTERFACE_HXX) && !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY) */

#if !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY)
#include "cwinhdcacquiredinterface.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

/**
 **********************************************************************
 * Typedef: cWinTextMetricInterfaceImplement
 *
 *  Author: $author$
 *    Date: 8/3/2010
 **********************************************************************
 */
typedef cWinHDCAcquiredInterface
cWinTextMetricInterfaceImplement;
/**
 **********************************************************************
 *  Class: cWinTextMetricInterface
 *
 * Author: $author$
 *   Date: 8/3/2010
 **********************************************************************
 */
class c_INTERFACE_CLASS cWinTextMetricInterface
: virtual public cWinTextMetricInterfaceImplement
{
public:
    typedef cWinTextMetricInterfaceImplement cImplements;
#else /* !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY) */

#if !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY)
};

#if !defined(CWINTEXTMETRICIMPLEMENT_MEMBERS_ONLY)
/**
 **********************************************************************
 * Typedef: cWinTextMetricImplementImplement
 *
 *  Author: $author$
 *    Date: 8/3/2010
 **********************************************************************
 */
typedef cWinTextMetricInterface
cWinTextMetricImplementImplement;
/**
 **********************************************************************
 *  Class: cWinTextMetricImplement
 *
 * Author: $author$
 *   Date: 8/3/2010
 **********************************************************************
 */
class c_IMPLEMENT_CLASS cWinTextMetricImplement
: virtual public cWinTextMetricImplementImplement
{
public:
    typedef cWinTextMetricImplementImplement cImplements;
#else /* !defined(CWINTEXTMETRICIMPLEMENT_MEMBERS_ONLY) */
#endif /* !defined(CWINTEXTMETRICIMPLEMENT_MEMBERS_ONLY) */

#if !defined(CWINTEXTMETRICIMPLEMENT_MEMBERS_ONLY)
};
#else /* !defined(CWINTEXTMETRICIMPLEMENT_MEMBERS_ONLY) */
#endif /* !defined(CWINTEXTMETRICIMPLEMENT_MEMBERS_ONLY) */

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY) */

#endif /* !defined(_CWINTEXTMETRICINTERFACE_HXX) || defined(CWINTEXTMETRICINTERFACE_MEMBERS_ONLY) */

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
 *   File: cx509certinterface.hxx
 *
 * Author: $author$
 *   Date: 4/2/2010
 **********************************************************************
 */
#if !defined(_CX509CERTINTERFACE_HXX) || defined(CX509CERTINTERFACE_MEMBERS_ONLY)
#if !defined(_CX509CERTINTERFACE_HXX) && !defined(CX509CERTINTERFACE_MEMBERS_ONLY)
#define _CX509CERTINTERFACE_HXX
#endif /* !defined(_CX509CERTINTERFACE_HXX) && !defined(CX509CERTINTERFACE_MEMBERS_ONLY) */

#if !defined(CX509CERTINTERFACE_MEMBERS_ONLY)
#include "ccryptointerface.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

/**
 **********************************************************************
 * Typedef: cX509CertInterfaceImplement
 *
 *  Author: $author$
 *    Date: 4/2/2010
 **********************************************************************
 */
typedef cCryptoInterface
cX509CertInterfaceImplement;
/**
 **********************************************************************
 *  Class: cX509CertInterface
 *
 * Author: $author$
 *   Date: 4/2/2010
 **********************************************************************
 */
class c_INTERFACE_CLASS cX509CertInterface
: virtual public cX509CertInterfaceImplement
{
public:
    typedef cX509CertInterfaceImplement cImplements;
#else /* !defined(CX509CERTINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CX509CERTINTERFACE_MEMBERS_ONLY) */

#if !defined(CX509CERTINTERFACE_MEMBERS_ONLY)
/* include cX509Cert member functions interface
 */
#define CX509CERT_MEMBERS_ONLY
#define CX509CERT_MEMBER_FUNCS_INTERFACE
#include "cx509cert.hxx"
#undef CX509CERT_MEMBER_FUNCS_INTERFACE
#undef CX509CERT_MEMBERS_ONLY
};

/**
 **********************************************************************
 *  Class: cX509CertImplement
 *
 * Author: $author$
 *   Date: 4/2/2010
 **********************************************************************
 */
class c_IMPLEMENT_CLASS cX509CertImplement
: virtual public cX509CertInterface
{
public:
    typedef cX509CertInterface cImplements;

/* include cX509Cert member functions implement
 */
#define CX509CERT_MEMBERS_ONLY
#define CX509CERT_MEMBER_FUNCS_IMPLEMENT
#include "cx509cert.hxx"
#undef CX509CERT_MEMBER_FUNCS_IMPLEMENT
#undef CX509CERT_MEMBERS_ONLY
};

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CX509CERTINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CX509CERTINTERFACE_MEMBERS_ONLY) */

#endif /* !defined(_CX509CERTINTERFACE_HXX) || defined(CX509CERTINTERFACE_MEMBERS_ONLY) */
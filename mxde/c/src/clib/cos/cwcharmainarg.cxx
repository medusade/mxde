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
 *   File: cwcharmainarg.cxx
 *
 * Author: $author$
 *   Date: 8/7/2010
 **********************************************************************
 */
#include "cwcharmainarg.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

template <>
cWCHARMainArgItem* cWCHARMainArgList::cExtends::cExtends::m_firstItem = 0;
template <>
cWCHARMainArgItem* cWCHARMainArgList::cExtends::cExtends::m_lastItem = 0;

#if defined(NO_TEMPLATE_STATIC_MEMBERS) 
cWCHARMainArgList cWCHARMainArg::m_list;
#else /* defined(NO_TEMPLATE_STATIC_MEMBERS) */
template <>
cWCHARMainArgList cWCHARMainArg::cExtends::m_list;
#endif /* defined(NO_TEMPLATE_STATIC_MEMBERS) */

#if defined(CWCHARMAINARG_INSTANCE_TEST)
cWCHARMainArg g_cWCHARMainArg;
#endif /* defined(CWCHARMAINARG_INSTANCE_TEST) */

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

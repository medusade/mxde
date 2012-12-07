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
 *   File: ctreeinterface.hxx
 *
 * Author: $author$
 *   Date: 9/3/2009
 **********************************************************************
 */
#if !defined(_CTREEINTERFACE_HXX) || defined(CTREEINTERFACE_MEMBERS_ONLY)
#if !defined(_CTREEINTERFACE_HXX) && !defined(CTREEINTERFACE_MEMBERS_ONLY)
#define _CTREEINTERFACE_HXX
#endif /* !defined(_CTREEINTERFACE_HXX) && !defined(CTREEINTERFACE_MEMBERS_ONLY) */

#if !defined(CTREEINTERFACE_MEMBERS_ONLY)
#include "ctreebranchinterface.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

class c_INTERFACE_CLASS cTreeBranch;
class c_INTERFACE_CLASS cTreeInterface;

#undef CDB_CLASS
#define CDB_CLASS "cTreeInterfaceT"
/**
 **********************************************************************
 *  Class: cTreeInterfaceT
 *
 * Author: $author$
 *   Date: 9/3/2009
 **********************************************************************
 */
template
<class TDerives=cTreeInterface,
 class TBranch=cTreeBranch,
 class TLeaf=CHAR,
 class TSize=TSIZE,
 class TLength=TLENGTH,
 class TUndefinedLength=TLength,
 TUndefinedLength VUndefinedLength=UNDEFINED_LENGTH,
 class TInterfaceBase=cInterfaceBase,
 class TImplements=TInterfaceBase>

class c_INTERFACE_CLASS cTreeInterfaceT
: virtual public TImplements
{
public:
    typedef TImplements cImplements;
#else /* !defined(CTREEINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CTREEINTERFACE_MEMBERS_ONLY) */

/* include cTreeBranch interface member definitions
 */
#define CTREEBRANCHINTERFACE_MEMBERS_ONLY
#include "ctreebranchinterface.hxx"
#undef CTREEBRANCHINTERFACE_MEMBERS_ONLY
    
#if !defined(CTREEINTERFACE_MEMBERS_ONLY)
};
#undef CDB_CLASS

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CTREEINTERFACE_MEMBERS_ONLY) */
#endif /* !defined(CTREEINTERFACE_MEMBERS_ONLY) */

#endif /* !defined(_CTREEINTERFACE_HXX) || defined(CTREEINTERFACE_MEMBERS_ONLY) */

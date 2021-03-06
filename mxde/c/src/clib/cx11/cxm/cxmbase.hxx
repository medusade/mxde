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
 *   File: cxmbase.hxx
 *
 * Author: $author$           
 *   Date: 5/18/2010
 **********************************************************************
 */
#if !defined(_CXMBASE_HXX) || defined(CXMBASE_MEMBERS_ONLY)
#if !defined(_CXMBASE_HXX) && !defined(CXMBASE_MEMBERS_ONLY)
#define _CXMBASE_HXX
#endif /* !defined(_CXMBASE_HXX) && !defined(CXMBASE_MEMBERS_ONLY) */

#if !defined(CXMBASE_MEMBERS_ONLY)
#include "cxtbase.hxx"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif /* defined(c_NAMESPACE) */

/**
 **********************************************************************
 * Typedef: cXmBaseExtend
 *
 *  Author: $author$           
 *    Date: 5/18/2010
 **********************************************************************
 */
typedef cXtBase
cXmBaseExtend;
/**
 **********************************************************************
 *  Class: cXmBase
 *
 * Author: $author$           
 *   Date: 5/18/2010
 **********************************************************************
 */
class c_INSTANCE_CLASS cXmBase
: /*virtual public cXmBaseImplement,
  */public cXmBaseExtend
{
public:
    /*typedef cXmBaseImplement cImplements;
    */typedef cXmBaseExtend cExtends;

    /**
     **********************************************************************
     *  Constructor: cXmBase
     *
     *       Author: $author$           
     *         Date: 5/18/2010
     **********************************************************************
     */
    cXmBase()
    {
    }
    /**
     **********************************************************************
     *  Destructor: ~cXmBase
     *
     *      Author: $author$           
     *        Date: 5/18/2010
     **********************************************************************
     */
    virtual ~cXmBase()
    {
    }
#else /* !defined(CXMBASE_MEMBERS_ONLY) */
#endif /* !defined(CXMBASE_MEMBERS_ONLY) */

#if !defined(CXMBASE_MEMBERS_ONLY)
};

#if defined(c_NAMESPACE)
}
#endif /* defined(c_NAMESPACE) */

#else /* !defined(CXMBASE_MEMBERS_ONLY) */
#endif /* !defined(CXMBASE_MEMBERS_ONLY) */

#endif /* !defined(_CXMBASE_HXX) || defined(CXMBASE_MEMBERS_ONLY) */

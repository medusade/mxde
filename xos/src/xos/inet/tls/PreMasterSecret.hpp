///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2014 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: PreMasterSecret.hpp
///
/// Author: $author$
///   Date: 4/23/2014
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_TLS_PREMASTERSECRET_HPP
#define _XOS_TLS_PREMASTERSECRET_HPP
#include "xos/tls/Base.hpp"

namespace xos {
namespace tls {


///////////////////////////////////////////////////////////////////////
///  Class: PreMasterSecret
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS PreMasterSecret: virtual public Implement,public Extend {
public:
    typedef Implement Implements;
    typedef Extend Extends;
    PreMasterSecret() {
    }
    virtual ~PreMasterSecret() {
    }
};


} // namespace tls 
} // namespace xos 


#endif // _XOS_TLS_PREMASTERSECRET_HPP 
        


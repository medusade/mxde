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
///   File: GmtUnixTime.hpp
///
/// Author: $author$
///   Date: 4/26/2014
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_TLS_GMTUNIXTIME_HPP
#define _XOS_TLS_GMTUNIXTIME_HPP

#include "xos/inet/tls/Base.hpp"

namespace xos {
namespace tls {

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS GmtUnixTime: virtual public Implement, virtual public Extend {
public:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    GmtUnixTime(uint32_t value = 0): m_value(value) {}
    virtual ~GmtUnixTime() {}
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t Read(io::Reader& reader) {
        ssize_t count = 0;
        return count;
    }
    virtual ssize_t Write(io::Writer& writer) {
        ssize_t count = 0;
        XOS_LOG_DEBUG("class " << __XOS_LOGGER_CLASS__ << "...");
        count = WriteMsb(writer, m_value, sizeof(uint32_t));
        return count;
    }
    virtual ssize_t SizeOf() const {
        ssize_t count = sizeof(uint32_t);
        return count;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    uint32_t m_value;
};

} // namespace tls
} // namespace xos 

#endif // _XOS_TLS_GMTUNIXTIME_HPP 
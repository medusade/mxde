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
///   File: Address.hpp
///
/// Author: $author$
///   Date: 2/16/2014
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_NETWORK_ETHERNET_OS_ADDRESS_HPP
#define _XOS_NETWORK_ETHERNET_OS_ADDRESS_HPP

#include "xos/network/ethernet/os/Os.hpp"

#if defined(WINDOWS)
// Windows
#include "xos/network/ethernet/windows/Address.hpp"
#else // defined(WINDOWS)
#if defined(MACOSX)
// MacOSX
#include "xos/network/ethernet/macosx/Address.hpp"
#else // defined(MACOSX)
// Unix
#include "xos/network/ethernet/unix/Address.hpp"
#endif // defined(MACOSX)
#endif // defined(WINDOWS)

namespace xos {
namespace network {
namespace ethernet {
namespace os {

typedef os::Address Address;

} // namespace os 
} // namespace ethernet 
} // namespace network 
} // namespace xos 

#endif // _XOS_NETWORK_ETHERNET_OS_ADDRESS_HPP 
///////////////////////////////////////////////////////////////////////
//   File: evattached.hpp
//
// Author: $author$
//   Date: 4/11/2009
///////////////////////////////////////////////////////////////////////

#ifndef _EVATTACHED_HPP
#define _EVATTACHED_HPP

#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvAttached
//
// Author: $author$
//   Date: 4/11/2009
///////////////////////////////////////////////////////////////////////
template
<class TAttached,
 class TImplements=EvBase>

class EV_EXPORT_CLASS EvAttached
: virtual public TImplements
{
public:
    typedef TImplements CImplements;
    typedef EvAttached CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: Attach
    //
    //   Author: $author$
    //     Date: 4/11/2009
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Attach
    (TAttached attached) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: Detach
    //
    //   Author: $author$
    //     Date: 4/11/2009
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Detach
    (TAttached& attached) = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: Attached
    //
    //   Author: $author$
    //     Date: 5/2/2009
    ///////////////////////////////////////////////////////////////////////
    virtual TAttached Attached() const = 0;
};
#endif // _EVATTACHED_HPP
///////////////////////////////////////////////////////////////////////
//   File: evfilepathdirectory.cpp
//
// Author: $author$
//   Date: 5/16/2009
///////////////////////////////////////////////////////////////////////

#include "evfilepathdirectory.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvFilePathDirectory
//
// Author: $author$
//   Date: 5/16/2009
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
// Function: EvFilePathDirectory::CreateInstance
//
//   Author: $author$
//     Date: 5/16/2009
///////////////////////////////////////////////////////////////////////
EvFilePathDirectory* EvFilePathDirectory::CreateInstance
(EvError& error) 
{
    EvFilePathDirectory* instance = 0;
    error = EV_ERROR_NOT_IMPLEMENTED;
    return instance;
}
///////////////////////////////////////////////////////////////////////
// Function: EvFilePathDirectory::DestroyInstance
//
//   Author: $author$
//     Date: 5/16/2009
///////////////////////////////////////////////////////////////////////
EvError EvFilePathDirectory::DestroyInstance
(EvFilePathDirectory& instance) 
{
    EvError error = EV_ERROR_NOT_IMPLEMENTED;
    return error;
}

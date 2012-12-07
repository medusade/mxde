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
 *   File: cmd5.hxx
 *
 * Author: $author$
 *   Date: 5/2/2009
 **********************************************************************
 */
#ifndef _CMD5_HXX
#define _CMD5_HXX

#include "ccryptohash.hxx"

/**
 **********************************************************************
 *  Class: cMD5
 *
 * Author: $author$
 *   Date: 5/2/2009
 **********************************************************************
 */
class c_EXPORT_CLASS cMD5
: public cCryptoHash
{
public:
    typedef cCryptoHash cExtends;
    typedef cMD5 cDerives;

    enum
    {
        HASHSIZE  = 16,
        BLOCKSIZE = 64,
        KEYMIN    = 1,
        KEYMAX    = BLOCKSIZE,
        KEYSIZE   = BLOCKSIZE,
    };

    UINT32 m_A,m_B,m_C,m_D,m_L,m_H;
    BYTE m_hash[HASHSIZE];
    BYTE m_in[BLOCKSIZE];
    BYTE m_key[BLOCKSIZE];
    BYTE m_mac[HASHSIZE];

    /**
     **********************************************************************
     * Constructor: cMD5
     *
     *      Author: $author$
     *        Date: 5/2/2009
     **********************************************************************
     */
    cMD5() 
    : cExtends
      (HASHSIZE,
       BLOCKSIZE,
       KEYMIN,
       KEYMAX,
       m_key,
       m_mac,
       m_hash) 
    {
    }

    /**
     **********************************************************************
     * Function: HashSize
     *
     *   Author: $author$
     *     Date: 5/2/2009
     **********************************************************************
     */
    virtual TLENGTH HashSize() const
    {
        return HASHSIZE;
    }

    /**
     **********************************************************************
     * Function: Initial
     *
     *   Author: $author$
     *     Date: 5/2/2009
     **********************************************************************
     */
    virtual void Initial();
    /**
     **********************************************************************
     * Function: Final
     *
     *   Author: $author$
     *     Date: 5/2/2009
     **********************************************************************
     */
    virtual void Final();
    /**
     **********************************************************************
     * Function: Transform
     *
     *   Author: $author$
     *     Date: 5/2/2009
     **********************************************************************
     */
    virtual void Transform();
    /**
     **********************************************************************
     * Function: Update
     *
     *   Author: $author$
     *     Date: 5/2/2009
     **********************************************************************
     */
    virtual void Update
    (const BYTE* in, unsigned inlen);
};
#endif /* _CMD5_HXX */

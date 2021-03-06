/**
 **********************************************************************
 * Copyright (c) 1988-2005 $organization$.
 *
 * This software is provided by the author and contributors ``as is'' and
 * any express or implied warranties, including, but not limited to, the
 * implied warranties of merchantability and fitness for a particular purpose
 * are disclaimed.  In no event shall the author or contributors be liable
 * for any direct, indirect, incidental, special, exemplary, or consequential
 * damages (including, but not limited to, procurement of substitute goods
 * or services; loss of use, data, or profits; or business interruption)
 * however caused and on any theory of liability, whether in contract, strict
 * liability, or tort (including negligence or otherwise) arising in any way
 * out of the use of this software, even if advised of the possibility of
 * such damage.
 *
 *   File: csslciphersuite.hxx
 *
 * Author: $author$
 *   Date: 1/13/2005
 *
 *    $Id$
 **********************************************************************
 */
#ifndef _CSSLCIPHERSUITE_HXX
#define _CSSLCIPHERSUITE_HXX

#include <string.h>
#include "platform.h"
#include "cbytestream.hxx"

/**
 **********************************************************************
 *  Class: cSSLCipherSuite
 *
 * Author: $author$
 *   Date: 1/13/2005
 **********************************************************************
 */
class cSSLCipherSuite
{
public:
    /**
     **********************************************************************
     * Enum: 
     *
     * Author: $author$
     *   Date: 1/13/2005
     **********************************************************************
     */
    enum
    {
        e_NONE = -1,
        e_FIRST,

        e_NULL = e_FIRST,
        e_RSA_MD5,
        e_RSA_SHA1,
        e_RSA_EXPORT_RC4_40_MD5,
        e_RSA_RC4_128_MD5,
        e_RSA_RC4_128_SHA1,
        e_RSA_EXPORT_RC2_40_MD5,
        e_RSA_IDEA_SHA1,
        e_RSA_EXPORT_DES_40_SHA1,
        e_RSA_DES_SHA1,
        e_RSA_3DES_SHA1,
        e_DH_DSS_EXPORT_DES40_SHA1,
        e_DH_DSS_DES_SHA1,
        e_DH_DSS_3DES_SHA1,
        e_DH_RSA_EXPORT_DES40_SHA1,
        e_DH_RSA_DES_SHA1,
        e_DH_RSA_3DES_SHA1,
        e_DHE_DSS_EXPORT_DES40_SHA1,
        e_DHE_DSS_DES_SHA1,
        e_DHE_DSS_3DES_SHA1,
        e_DHE_RSA_EXPORT_DES40_SHA1,
        e_DHE_RSA_DES_SHA1,
        e_DHE_RSA_3DES_SHA1,
        e_DH_ANON_EXPORT_RC4_40_MD5,
        e_DH_ANON_RC4_128_MD5,
        e_DH_ANON_EXPORT_DES40_SHA1,
        e_DH_ANON_DES_SHA1,
        e_DH_ANON_3DES_SHA1,
        e_FORTEZZA_KEA_SHA1,
        e_FORTEZZA_KEA_FORTEZZA_SHA1,
        e_FORTEZZA_KEA_RC4_128_SHA1,

        e_ALL,
        e_LAST = e_ALL-1
    };

protected:
    static const char *m_names[e_ALL];
    static const cSSLCipherSuite m_suites[e_ALL];

    uint16 m_code;
    int m_suite;

public:
    /**
     **********************************************************************
     * Constructor: cSSLCipherSuite
     *
     *      Author: $author$
     *        Date: 1/14/2005
     **********************************************************************
     */
    cSSLCipherSuite(int suite=e_NONE) 
    {
        int size;
        eError error;

        if (0 > (size = Set(suite)))
            throw(error = -size);
    }
    /**
     **********************************************************************
     * Constructor: cSSLCipherSuite
     *
     *      Author: $author$
     *        Date: 1/14/2005
     **********************************************************************
     */
    cSSLCipherSuite(uint16 code, int suite) 
    : m_code(code), 
      m_suite(suite)
    {
    }
    /**
     **********************************************************************
     * Function: Sizeof
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Sizeof() const 
    {
        int size = sizeof(m_code);
        return size;
    }
    /**
     **********************************************************************
     * Function: Copy
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Copy(cSSLCipherSuite &suite)
    {
        int size = Set(suite.m_suite);
        return size;
    }
    /**
     **********************************************************************
     * Function: Set
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Set(int suite)
    {
        int size = Sizeof();

        if ((suite < e_FIRST) || (suite > e_LAST))
            return -e_ERROR_FAILED;

        m_code = GetCodeBySuite(m_suite = suite);
        return size;
    }
    /**
     **********************************************************************
     * Function: Read
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Read(cBYTEStream &stream) 
    {
        int size;

        if (0 < (size = stream.ReadUInt16MSB(m_code)))
            m_suite = GetSuiteByCode(m_code);
        else
        {
            m_suite = e_NONE;
            m_code = -1;
        }
        return size;
    }
    /**
     **********************************************************************
     * Function: Write
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Write(cBYTEStream &stream) 
    {
        int size = stream.WriteUInt16MSB(m_code);
        return size;
    }
    /**
     **********************************************************************
     * Operator: !=
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int operator != (cSSLCipherSuite &suite)
    {
        int unequal = 0;
        return unequal;
    }
    /**
     **********************************************************************
     * Function: GetName
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    inline const char* GetName() const
    {
        if ((m_suite >= e_FIRST) && (m_suite <= e_LAST))
            return m_names[m_suite];
        return "NONE";
    }
    /**
     **********************************************************************
     * Function: GetCode
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    inline uint16 GetCode() const
    {
        return m_code;
    }
    /**
     **********************************************************************
     * Function: GetSuite
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    inline int GetSuite() const
    {
        return m_suite;
    }

protected:
    /**
     **********************************************************************
     * Function: GetSuiteByCode
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    static int GetSuiteByCode(uint16 code);
    /**
     **********************************************************************
     * Function: GetCodeBySuite
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    static uint16 GetCodeBySuite(int suite);
};

/**
 **********************************************************************
 *  Class: cSSLCipherSuites
 *
 * Author: $author$
 *   Date: 1/14/2005
 **********************************************************************
 */
class cSSLCipherSuites
{
protected:
    uint16 m_sizeof;
    uint16 m_suites;
    uint16 m_suite_sizeof;
    cSSLCipherSuite m_suite[cSSLCipherSuite::e_ALL];

public:
    /**
     **********************************************************************
     * Constructor: cSSLCipherSuites
     *
     *      Author: $author$
     *        Date: 1/14/2005
     **********************************************************************
     */
    cSSLCipherSuites
    (const cSSLCipherSuite *suite=0, int suites=-1) 
    : m_suites(0),
      m_sizeof(0) 
    {
        eError error;
        int size;

        m_suite_sizeof = m_suite[0].Sizeof();

        if (suite)
        if (0 > (size = Set(suite, suites)))
            throw(error = -size);
    }
    /**
     **********************************************************************
     * Function: Sizeof
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Sizeof() const 
    {
        int size = sizeof(m_sizeof)+(m_suites*m_suite_sizeof);
        return size;
    }
    /**
     **********************************************************************
     * Function: Copy
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Copy(const cSSLCipherSuites &suites)
    {
        int size = Set(suites.GetSuite(), suites.GetSuites());
        return size;
    }
    /**
     **********************************************************************
     * Function: Set
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Set(const cSSLCipherSuite *suite=0, int suites=-1)
    {
        int i,size;

        for (i=0; i<suites; i++)
            if (0 > (size = m_suite[i].Copy(suite[i])))
                return size;

        m_sizeof = suites*m_suite_sizeof;
        m_suites = suites;
        return size = Sizeof();
    }
    /**
     **********************************************************************
     * Function: Read
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Read(cBYTEStream &stream) 
    {
        int i,size,size_of,suites;

        if (0 <= (size = stream.Getb()))
        {
            if (size % m_suite_sizeof)
                return -e_ERROR_INVALID_RETURN_SIZE;

            if (cSSLCipherSuite::e_ALL
                < (suites = size/m_suite_sizeof))
                return -e_ERROR_RETURN_SIZE_OVER;

            for (size_of=size, i=0; i<suites; i++)
                if (0 > (size = m_suite[i].Read(stream)))
                    return size;

            m_suites = suites;
            m_sizeof = size_of;
            size = Sizeof();
    }
    /**
     **********************************************************************
     * Function: Write
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    int Write(cBYTEStream &stream) 
    {
        int i,size;

        if (0 <= (size = stream.Putb(m_sizeof)))
        {
            for (i=0; i<m_suites; i++)
                if (0 > (size = m_suite[i].Write(stream)))
                    return size;

            size = Sizeof();
        }
        return size;
    }
    /**
     **********************************************************************
     * Function: GetSuites
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    inline uint8 GetSuites() const
    {
        return m_suites;
    }
    /**
     **********************************************************************
     * Function: GetSuite
     *
     *   Author: $author$
     *     Date: 1/14/2005
     **********************************************************************
     */
    inline const cSSLCipherSuite* GetSuite() const
    {
        return m_suite;
    }
};

#endif /* _CSSLCIPHERSUITE_HXX */

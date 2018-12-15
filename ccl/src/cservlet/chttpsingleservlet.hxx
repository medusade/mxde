/**
 **********************************************************************
 * Copyright (c) 1988-2014 $author$
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
 *   File: chttpsingleservlet.hxx
 *
 * Author: $author$
 *   Date: 5/24/2014
 **********************************************************************
 */
#ifndef _CHTTPSINGLESERVLET_HXX
#define _CHTTPSINGLESERVLET_HXX

#include "chttpservlet.hxx"

/**
 **********************************************************************
 *  Class: cHttpSingleServlet
 *
 * Author: $author$
 *   Date: 5/24/2014
 **********************************************************************
 */
class c_EXPORT_CLASS cHttpSingleServlet
: public cHttpServlet
{
public:
    typedef cHttpServlet cExtends;
    typedef cHttpSingleServlet cDerives;

    static cHttpServletInterface *m_instance;
    cHttpServletInterface *m_old_instance;
    bool m_is_non_static_instance;

    /**
     **********************************************************************
     * Constructor: cHttpSingleServlet
     *
     *      Author: $author$
     *        Date: 5/24/2014
     **********************************************************************
     */
    cHttpSingleServlet
    (const char *name, int namelen=-1,
     bool is_non_static_instance=false)
    : cExtends(name, namelen),
      m_old_instance(0),
      m_is_non_static_instance(is_non_static_instance)
    {
        if (!is_non_static_instance)
        {
            m_old_instance = m_instance;
            m_instance = this;
        }
    }
    /**
     **********************************************************************
     * Destructor: ~cHttpSingleServlet
     *
     *     Author: $author$
     *       Date: 5/24/2014
     **********************************************************************
     */
    virtual ~cHttpSingleServlet()
    {
        if (this == m_instance)
            m_instance = m_old_instance;
    }
    /**
     **********************************************************************
     * Function: GetHttpServlet
     *
     *   Author: $author$
     *     Date: 5/24/2014
     **********************************************************************
     */
    virtual cHttpServletInterface* GetHttpServlet() const
    {
        cHttpServletInterface* servlet;
        if ((servlet = m_http_servlet))
            return servlet;
        if ((servlet = m_instance) && (servlet != this))
            return servlet;
        return 0;
    }
};

#endif /* _CHTTPSINGLESERVLET_HXX */

        

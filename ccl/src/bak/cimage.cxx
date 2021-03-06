/**
 **********************************************************************
 * Copyright (c) 1988-2004 $organization$.
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
 *   File: cimage.cxx
 *
 * Author: $author$
 *   Date: 4/1/2004
 *
 *    $Id$
 **********************************************************************
 */

#include "cimage.hxx"

/*
 **********************************************************************
 *  Class: cStaticImageObjectType::cList
 *
 * Author: $author$
 *   Date: 4/1/2004
 **********************************************************************
 */
cStaticImageObjectType *cStaticImageObjectType::cList::cIs::m_first=0;
cStaticImageObjectType *cStaticImageObjectType::cList::cIs::m_last=0;

/*
 **********************************************************************
 *  Class: cStaticImageObjectType
 *
 * Author: $author$
 *   Date: 4/1/2004
 **********************************************************************
 */
cStaticImageObjectType::cList cStaticImageObjectType::m_list;

/**
 **********************************************************************
 *  Class: cStaticImageTabType
 *
 * Author: $author$
 *   Date: 4/1/2004
 **********************************************************************
 */
cStaticImageTabType cStaticImageTabType::m_instance;

/**
 **********************************************************************
 *  Class: cStaticImageTagType
 *
 * Author: $author$
 *   Date: 4/1/2004
 **********************************************************************
 */
cStaticImageTagType cStaticImageTagType::m_instance;

/**
 **********************************************************************
 *  Class: cStaticImageGroupType
 *
 * Author: $author$
 *   Date: 4/1/2004
 **********************************************************************
 */
cStaticImageGroupType cStaticImageGroupType::m_instance;

/*
 **********************************************************************
 *  Class: cStaticImageFilledCircleQuadrantType
 *
 * Author: $author$
 *   Date: 4/7/2004
 **********************************************************************
 */
cStaticImageFilledCircleQuadrantType cStaticImageFilledCircleQuadrantType::m_instance;

/*
 **********************************************************************
 *  Class: cStaticImageCanvasType
 *
 * Author: $author$
 *   Date: 4/7/2004
 **********************************************************************
 */
cStaticImageCanvasType cStaticImageCanvasType::m_instance;

/*
 * O/S-dependent (mis)feature macro definitions
 *
 * $XdotOrg: proto/X11/Xosdefs.h,v 1.7 2005/11/08 06:33:25 jkj Exp $
 * $Xorg: Xosdefs.h,v 1.5 2001/02/09 02:03:23 xorgcvs Exp $
 *
Copyright 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.
 */
/* $XFree86: xc/include/Xosdefs.h,v 3.20 2002/05/31 18:45:39 dawes Exp $ */

/**
 **********************************************************************
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
 *   File: cplatform_X11_Xosdefs.h
 *
 * Author: $author$           
 *   Date: 5/4/2010
 **********************************************************************
 */
#ifndef _CPLATFORM_X11_XOSDEFS_H
#define _CPLATFORM_X11_XOSDEFS_H
#include "cplatform.h"

#if !defined(WINDOWS) 
/* Unix
 */
#include <X11/Xosdefs.h>
#else /* !defined(WINDOWS) */
/* Windows
 */

/*
 * X_NOT_STDC_ENV means does not have ANSI C header files.  Lack of this
 * symbol does NOT mean that the system has stdarg.h.
 *
 * X_NOT_POSIX means does not have POSIX header files.  Lack of this
 * symbol does NOT mean that the POSIX environment is the default.
 * You may still have to define _POSIX_SOURCE to get it.
 */

#ifdef NOSTDHDRS
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef sony
#if !defined(SYSTYPE_SYSV) && !defined(_SYSTYPE_SYSV)
#define X_NOT_POSIX
#endif
#endif

#ifdef UTEK
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef vax
#ifndef ultrix			/* assume vanilla BSD */
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif
#endif

#ifdef luna
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef Mips
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif
  
#ifdef USL
#ifdef SYSV /* (release 3.2) */
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif
#endif

#ifdef _SCO_DS
#ifndef __SCO__
#define __SCO__
#endif
#endif

#ifdef i386
#ifdef SYSV
#if !defined(ISC) && !defined(__SCO__) && !defined(_SEQUENT_) && \
	!defined(__UNIXWARE__) && !defined(sun)
#if !defined(_POSIX_SOURCE)
#define X_NOT_POSIX
#endif
#define X_NOT_STDC_ENV
#endif
#endif
#endif

#ifdef MOTOROLA
#ifdef SYSV
#define X_NOT_STDC_ENV
#endif
#endif

#ifdef sun
/* Imake configs define SVR4 on Solaris, but cc & gcc only define __SVR4
 * This check allows non-Imake configured programs to build correctly.
 */
#if defined(__SVR4) && !defined(SVR4)
#define SVR4 1
#endif
#ifdef SVR4
/* define this to whatever it needs to be */
#define X_POSIX_C_SOURCE 199300L
#endif
#endif

#ifdef WIN32
#ifndef _POSIX_
#define X_NOT_POSIX
#endif
#endif

#if defined(nec_ews_svr2) || defined(SX) || defined(PC_UX)
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef __UNIXOS2__
#define USGISH
#define NULL_NOT_ZERO
#endif

#ifdef __DARWIN__
#define NULL_NOT_ZERO
#endif

#ifdef __GNU__
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
#ifndef MAXPATHLEN
#define MAXPATHLEN 4096
#endif
#endif

#if defined(__SCO__) || defined(__UNIXWARE__)
# ifndef PATH_MAX
#  define PATH_MAX	1024
# endif
# ifndef MAXPATHLEN
#  define MAXPATHLEN	1024
# endif
#endif

#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) \
	|| defined(__Darwin__) || defined(__DragonFly__)
# ifndef CSRG_BASED
#  define CSRG_BASED
# endif
#endif

/* Windows
 */
#endif /* !defined(WINDOWS) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* _CPLATFORM_X11_XOSDEFS_H */


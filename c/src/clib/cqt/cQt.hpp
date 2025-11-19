//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
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
///   File: cQt.hpp
///
/// Author: $author$
///   Date: 11/17/2025
//////////////////////////////////////////////////////////////////////////
#ifndef _CQT_HPP
#define _CQT_HPP

#include <QtCore/QtCore>
#if  (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtGui/QtGui>
#else
#include <QtWidgets/QtWidgets>
#endif

#endif /// ndef _CQT_HPP


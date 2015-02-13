///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2012 $organization$
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
///   File: semaphore.h
///
/// Author: $author$
///   Date: 10/14/2012
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_WINDOWS_MACOSX_MACH_SEMAPHORE_H
#define _XOS_WINDOWS_MACOSX_MACH_SEMAPHORE_H

#include <mach/mach.h>
#include <mach/task.h>

typedef void* semaphore_t;

kern_return_t semaphore_create
(task_t task, semaphore_t* new_semaphore, sync_policy_t policy, int value);

kern_return_t semaphore_destroy(task_t task, semaphore_t semaphore);

kern_return_t semaphore_signal(semaphore_t semaphore);

kern_return_t semaphore_signal_all(semaphore_t semaphore);

kern_return_t semaphore_wait(semaphore_t semaphore);

kern_return_t semaphore_timedwait
(semaphore_t semaphore, mach_timespec_t wait_time);

kern_return_t semaphore_timedwait_signal
(semaphore_t wait_semaphore, semaphore_t signal_semaphore, mach_timespec_t wait_time);

kern_return_t semaphore_wait_signal
(semaphore_t wait_semaphore, semaphore_t signal_semaphore);

kern_return_t semaphore_signal_thread
(semaphore_t semaphore, thread_t thread);

namespace xos {

} // namespace xos 

#endif // _XOS_WINDOWS_MACOSX_MACH_SEMAPHORE_H 

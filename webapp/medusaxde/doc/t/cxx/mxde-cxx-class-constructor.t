%########################################################################
%# Copyright (c) 1988-2011 $organization$  
%#
%# This software is provided by the author and contributors ``as is'' 
%# and any express or implied warranties, including, but not limited to, 
%# the implied warranties of merchantability and fitness for a particular 
%# purpose are disclaimed. In no event shall the author or contributors 
%# be liable for any direct, indirect, incidental, special, exemplary, 
%# or consequential damages (including, but not limited to, procurement 
%# of substitute goods or services; loss of use, data, or profits; or 
%# business interruption) however caused and on any theory of liability, 
%# whether in contract, strict liability, or tort (including negligence 
%# or otherwise) arising in any way out of the use of this software, 
%# even if advised of the possibility of such damage.
%#
%#   File: mxde-cxx-class-constructor.t
%#
%# Author: $author$           
%#   Date: 1/2/2011
%########################################################################
%with(%
%Full_class_name,%(%Class_prefix%%Class%%Class_suffix%%Template_class_suffix%)%,%
%%(%
%%if(%class_constructor_comment%,%(%
%%include(%filepath%/mxde-%if-then(%style%,%(-)%)%cxx-class-constructor-comment.t)%%
%)%)%%
%%indent%%Full_class_name%::%Full_class_name%%
%%if(%class_constructor_parameters%,%(
%indent%)%)%%(()%%
%%parse(%class_constructor_parameters%,;,,%(,
%indent% )%,,%(%
%%parse(%class_constructor_parameters%,%(,)%,,%(,
%indent% )%,,%(%
%%else-then(%left(%parameter%,=)%,%(%parameter%)%)%%
%)%,parameter)%%
%)%,class_constructor_parameters)%%
%%())%%
%%if(%class_constructor_construct%,%(%
%%if(%class_constructor_parameters%,%(
%indent%)%)%%
%: %parse(%class_constructor_construct%,;,,%(, %if(%class_constructor_parameters%,%(
%indent%  )%)%)%)%%
%)%,%()%)%%else(%is_kr_indent%,%(
%indent%)%,%( )%)%{
%apply(_indent,%indent%,indent,%indent%%indent_%,%(%
%)%)%%
%%indent%}
%
%)%)%
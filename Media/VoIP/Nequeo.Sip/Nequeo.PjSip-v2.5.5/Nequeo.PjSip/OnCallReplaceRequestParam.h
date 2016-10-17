/* Company :       Nequeo Pty Ltd, http://www.nequeo.com.au/
*  Copyright :     Copyright � Nequeo Pty Ltd 2015 http://www.nequeo.com.au/
*
*  File :          OnCallReplaceRequestParam.h
*  Purpose :       SIP OnCallReplaceRequestParam class.
*
*/

/*
Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#ifndef _ONCALLREPLACEREQUESTPARAM_H
#define _ONCALLREPLACEREQUESTPARAM_H

#include "stdafx.h"

#include "Call.h"
#include "CallInfo.h"
#include "SipRxData.h"
#include "CallSetting.h"
#include "StatusCode.h"

#include "pjsua2.hpp"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

namespace Nequeo
{
	namespace Net
	{
		namespace PjSip
		{
			///	<summary>
			///	This structure contains parameters for Call::onCallReplaceRequest() callback.
			///	</summary>
			public ref class OnCallReplaceRequestParam sealed
			{
			public:
				///	<summary>
				///	This structure contains parameters for Call::onCallReplaceRequest() callback.
				///	</summary>
				OnCallReplaceRequestParam();

				/// <summary>
				/// Gets or sets the current call.
				/// </summary>
				property Call^ CurrentCall
				{
					Call^ get();
					void set(Call^ value);
				}

				/// <summary>
				/// Gets or sets the call information.
				/// </summary>
				property CallInfo^ Info
				{
					CallInfo^ get();
					void set(CallInfo^ value);
				}

				/// <summary>
				/// Gets or sets the incoming INVITE request to replace the call.
				/// </summary>
				property SipRxData^ RxData
				{
					SipRxData^ get();
					void set(SipRxData^ value);
				}

				/// <summary>
				/// Gets or sets the current call setting, application can update this setting for the call being replaced.
				/// </summary>
				property CallSetting^ Setting
				{
					CallSetting^ get();
					void set(CallSetting^ value);
				}

				/// <summary>
				/// Gets or sets the optional status text to be set by application.
				/// </summary>
				property String^ Reason
				{
					String^ get();
					void set(String^ value);
				}

				/// <summary>
				/// Gets or sets the Status code to be set by application. Application should only
				/// return a final status(200 - 699).
				/// </summary>
				property StatusCode Code
				{
					StatusCode get();
					void set(StatusCode value);
				}

			private:
				Call^ _currentCall;
				CallInfo^ _info;
				SipRxData^ _rxData;
				CallSetting^ _setting;
				String^ _reason;
				StatusCode _code;
			};
		}
	}
}
#endif
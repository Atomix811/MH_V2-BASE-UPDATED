#pragma once

namespace Mod_Hub_Base
{
	class fibermain
	{
	public:
		static HANDLE handle;
		static void pause(bool show_msg = true, int duration = 0);
		static DWORD wake_time;
	};
}
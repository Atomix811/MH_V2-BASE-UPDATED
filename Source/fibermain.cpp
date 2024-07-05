#include "stdafx.h"
#include "fibermain.hpp"

namespace Mod_Hub_Base
{

	HANDLE fibermain::handle = nullptr;
	DWORD fibermain::wake_time = NULL;

	void fibermain::pause(bool show_msg, int duration)
	{
		//if (show_msg)
		//	UserInterface::DrawTextInGame("One moment please", { 255, 255, 255, 255, UserInterface::Font::Pricedown }, { 0.525f, 0.400f }, { 1.5f, 1.5f }, true, true);

		if (duration > 0)
			wake_time = timeGetTime() + duration;

		SwitchToFiber(fibermain::handle);
	}

}
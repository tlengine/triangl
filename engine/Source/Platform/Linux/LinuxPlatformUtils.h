#pragma once

#include "Platform/Desktop/DesktopPlatformUtils.h"

namespace Triangl
{
	class LinuxPlatformUtils : public DesktopPlatformUtils
	{
	public:
		virtual SystemTheme GetSystemTheme() const override;
	};
}

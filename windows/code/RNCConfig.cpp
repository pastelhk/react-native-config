#include "pch.h"
#include "RNCConfig.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::RNCConfig
{
	JSValueObject RNCConfigModule::getConstants() noexcept
	{
		JSValueObject obj{};
	#if __has_include("RNCConfigValuesObject.inc.g.h")
	#include "RNCConfigValuesObject.inc.g.h"
	#endif
		return obj;
	}
}

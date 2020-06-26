#pragma once

#ifdef HK_PLATFORM_WINDOWS
	ifdef# HK_BUILD_DLL
		#define HAWK_API __declspec(dllexport)
	#else
		#define HAWK_API __declspec(dllimport)
	#endif
#else
	#error Hawk only supports Windows!
#endif
#pragma once

#ifdef UNEASY_PLATFORM_WINDOWS
	#ifdef UNEASY_BUILD_DLL
		#define UNEASY_API __declspec(dllexport)
	#else
		#define UNEASY_API __declspec(dllimport)
	#endif
#else
	#error Uneasy only supports Windows!
#endif
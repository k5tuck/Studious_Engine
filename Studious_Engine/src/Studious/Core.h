#pragma once

#ifdef STUDIOUS_PLATFORM_WINDOWS
	#ifdef STUDIOUS_BUILD_DLL
		#define STUDIOUS_API __declspec(dllexport)
	#else
		#define STUDIOUS_API __declspec(dllimport)
	#endif
#else
	#error Studious only supports Windows! 
#endif


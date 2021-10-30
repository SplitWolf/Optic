#pragma once

#ifdef OC_PLATFORM_WINDOWS
	#ifdef OC_BUILD_DLL
		#define OPTIC_API __declspec(dllexport)
	#else
		#define OPTIC_API __declspec(dllexport)
	#endif // OC_BUILD_DLL
#else
	#error Optic only supports windows
#endif
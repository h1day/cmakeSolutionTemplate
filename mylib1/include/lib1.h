#pragma once

#ifdef WIN32
#ifdef LIB1_EXPORTS
#define LIB1_API __declspec(dllexport)
#else
#define LIB1_API __declspec(dllimport)
#endif
#else
#define LIB1_API __attribute__((visibility("default")))
#endif

LIB1_API int lib1_func(int x, int y);
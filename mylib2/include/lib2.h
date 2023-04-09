#pragma once

#ifdef WIN32
#ifdef LIB2_EXPORTS
#define LIB2_API __declspec(dllexport)
#else
#define LIB2_API __declspec(dllimport)
#endif
#else
#define LIB2_API __attribute__((visibility("default")))
#endif

LIB2_API int lib2_func(int x, int y);
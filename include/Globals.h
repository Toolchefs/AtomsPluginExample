#pragma once
#ifdef ATOMS_UNREAL
#define ATOMSPLUGINEXAMPLE_EXPORT ATOMSREALTIME_API
#else
#ifdef ATOMS_STATIC
#define ATOMSPLUGINEXAMPLE_EXPORT 
#else

#if USE_ATOMSPLUGINEXAMPLE
#if defined(__APPLE__) || defined(LINUX)
#define ATOMSPLUGINEXAMPLE_EXPORT __attribute__ ((visibility ("default")))
#else
#ifdef BUILD_ATOMSPLUGINEXAMPLE
#define ATOMSPLUGINEXAMPLE_EXPORT __declspec(dllexport)
#else
#define ATOMSPLUGINEXAMPLE_EXPORT __declspec(dllimport)
#endif
#endif // LINUX

#else

#include <Atoms/Globals.h>
#define ATOMSPLUGINEXAMPLE_EXPORT ATOMS_EXPORT
#endif


#endif // ATOMS_STATIC

#endif //ATOMS_UNREAL
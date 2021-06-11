
/*

SDL2_imageFilter.h: byte-image "filter" routines 

Copyright (C) 2001-2012  Andreas Schiffler

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.

Andreas Schiffler -- aschiffler at ferzkopp dot net

*/

#ifndef _SDL2_imageFilter_h
#define _SDL2_imageFilter_h

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

	/* ---- Function Prototypes */

#ifdef _MSC_VER
#  if defined(DLL_EXPORT) && !defined(LIBSDL2_GFX_DLL_IMPORT)
#    define SDL2_IMAGEFILTER_SCOPE __declspec(dllexport)
#  else
#    ifdef LIBSDL2_GFX_DLL_IMPORT
#      define SDL2_IMAGEFILTER_SCOPE __declspec(dllimport)
#    endif
#  endif
#endif
#ifndef SDL2_IMAGEFILTER_SCOPE
#  define SDL2_IMAGEFILTER_SCOPE extern
#endif

	/* Comments:                                                                           */
	/*  1.) MMX functions work best if all data blocks are aligned on a 32 bytes boundary. */
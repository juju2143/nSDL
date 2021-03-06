/*
	SDL - Simple DirectMedia Layer
	Copyright (C) 1997-2012 Sam Lantinga

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

	Sam Lantinga
	slouken@libsdl.org
*/

#ifndef _SDL_config_prizm_h
#define _SDL_config_prizm_h

#include <STD_syscalls.h>

/* General platform specific identifiers */
#include "SDL_platform.h"

#define PZM_DEBUG	0
#define PZM_MSGBOX_ERROR	0
#define DEBUG_BUILD	0
#define DEBUG_VIDEO	0
#define DEBUG_ERROR	0

#define PSDL_VERSION	"0.0.1"

#if PZM_DEBUG
#define PZM_DPRINT(fmt, args...) \
	fprintf(stderr, "[pSDL] %s():%d: " fmt "\n", __FUNCTION__, __LINE__, ## args)
#else
#define PZM_DPRINT(fmt, args...) (void)0
#endif

//#define SDL_HAS_64BIT_TYPE	1

/* Endianness */
#define SDL_BYTEORDER	1234

/* Useful headers */
#define HAVE_STDIO_H	1
#define HAVE_STDLIB_H	1
#define HAVE_STDARG_H	1
//#define HAVE_STRING_H	1
//#define HAVE_CTYPE_H	1
#define HAVE_STDINT_H 1

/* C library functions */
#define HAVE_MALLOC	1
//#define HAVE_CALLOC	1
//#define HAVE_REALLOC	1
//#define HAVE_FREE	1
#define HAVE_MEMSET	1
#define HAVE_MEMCPY	1
//#define HAVE_MEMMOVE	1
#define HAVE_MEMCMP	1
//#define HAVE_STRLEN	1
//#define HAVE_STRCHR	1
//#define HAVE_STRSTR	1
//#define HAVE_STRTOL	1
//#define HAVE_STRTOUL	1
//#define HAVE_STRTOD	1
//#define HAVE_ATOI	1
//#define HAVE_ATOF	1
//#define HAVE_STRCMP	1
//#define HAVE_STRNCMP	1

/* Allow disabling of core subsystems */
#define SDL_AUDIO_DISABLED	1
#define SDL_CDROM_DISABLED	1
#define SDL_JOYSTICK_DISABLED	1
#define SDL_LOADSO_DISABLED	1
#define SDL_THREADS_DISABLED	1

/* Enable various timer systems */
#define SDL_TIMER_PRIZM	1

/* Enable various video drivers */
#define SDL_VIDEO_DRIVER_PRIZM	1

/* Enable assembly routines */
//#define SDL_ASSEMBLY_ROUTINES	1

/* Font flags
#define NSDL_FONTCFG_NONE	0
#define NSDL_FONTCFG_TEXTWRAP	(1 << 0)
#define NSDL_FONTCFG_AUTOSIZE	(1 << 1)
#define NSDL_FONTCFG_FORMAT	(1 << 2)
#define NSDL_FONTCFG_DEFAULT	(NSDL_FONTCFG_TEXTWRAP | NSDL_FONTCFG_AUTOSIZE | NSDL_FONTCFG_FORMAT)*/

/* Fonts; needs to match nsp_font_charmaps in SDL_tinspirevideo.c
enum {
	NSDL_FONT_THIN = 0,
	NSDL_FONT_SPACE,
	NSDL_FONT_VGA,
	NSDL_FONT_FANTASY,
	NSDL_FONT_TINYTYPE
};*/

#endif /* _SDL_config_tinspire_h */

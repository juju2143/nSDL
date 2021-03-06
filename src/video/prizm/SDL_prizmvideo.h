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

//#include <os.h>

#include "SDL_config.h"

#ifndef _SDL_prizmvideo_h
#define _SDL_prizmvideo_h

#include "../SDL_sysvideo.h"


/* Hidden "this" pointer for the video functions */
#define _THIS	SDL_VideoDevice *this

#define PZM_RMASK16 0xF800
#define PZM_GMASK16 0x07E0
#define PZM_BMASK16 0x001F
#define SCREEN_BASE_ADDRESS VRAM

#define PZM_PIXEL_ADDR(origin, x, y, pitch, bpp) ((char *)origin + ((x) * (bpp)) + ((y) * (pitch)))
#define PZM_SURF_PIXEL(surface, x, y) PZM_PIXEL_ADDR(surface->pixels, x, y, surface->pitch, surface->format->BytesPerPixel)
#define PZM_CREATE_PALETTE(surface) SDL_SetColors(surface, SDL_VideoSurface->format->palette->colors, \
						  0, SDL_VideoSurface->format->palette->ncolors)

/* Private display data */

char* VRAM = (char *) 0xA8000000;

struct SDL_PrivateVideoData {
	int w, h;
	int offset;
	int offset_x;
	void *buffer;
//	int cx;
};

#endif /* _SDL_prizmvideo_h */


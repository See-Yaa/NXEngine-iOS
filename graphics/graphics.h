#ifndef ____GRAPHICS_H___
#define ____GRAPHICS_H___



#include "../config.h"

#ifdef CONFIG_USE_SDL2
# include "graphics.sdl2.h"
#else
# include "graphics.sdl1.h"
#endif

#endif
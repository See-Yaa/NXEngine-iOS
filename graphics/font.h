#ifndef ____FONT_H___
#define ____FONT_H___



#include "../config.h"

#ifdef CONFIG_USE_SDL2
# include "font.sdl2.h"
#else
# include "font.sdl1.h"
#endif

#endif
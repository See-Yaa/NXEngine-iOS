#ifndef ____NXSURFACE_H___
#define ____NXSURFACE_H___



#include "../config.h"

#ifdef CONFIG_USE_SDL2
# include "nxsurface.sdl2.h"
#else
# include "nxsurface.sdl1.h"
#endif

#endif

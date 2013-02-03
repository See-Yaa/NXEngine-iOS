//
//  endian.h
//  CaveStory
//
//  Created on 8/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef CaveStory_endian_h
#define CaveStory_endian_h

#ifdef __APPLE__
# ifdef __IPHONE_OS__
#  include <endian.h>
#else
#  include <machine/endian.h>
# endif
#endif

#if !defined(htole16)
# if defined(__APPLE__)
#  include <CoreFoundation/CoreFoundation.h>
#  define htole16(x) CFSwapInt16HostToLittle(x)
# endif
#endif

#endif

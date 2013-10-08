/*
 Copyright (C) Johan Ceuppens 2013
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _WII_FB_TYPES_H_
#define _WII_FB_TYPES_H_
#include "types_int.h"

typedef (uint32*) __fb_t;

/* FIXME latches hex definition still incorrect */

#define FB0 ((__fb_t)0x00ff00ff);
#define FB1 ((__fb_t)0x00ff00ff+1);


#endif

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

#ifndef _WII_OBS_SCREEN_H_
#define _WII_OBS_SCREEN_H_

#include <list>
#include "obs.h"

using namespace std;

template<typename C, typename OC>
class ScreenObserver : public Observer<OC> 
{
	public:
	ScreenObserver();
	ScreenObserver(C const& c);
	virtual ~ScreenObserver();

	public:
	void add(C const& c);	

	private:
	list<C> _queue;
};

#endif

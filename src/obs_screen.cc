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
#include "obs_screen.h"

template<typename C, typename OC>
ScreenObserver<C,OC>::ScreenObserver() 

	: _queue()

{

}

template<typename C, typename OC>
ScreenObserver<C,OC>::ScreenObserver(C const& c) 
{
	this.c = set(c);
}

template<typename C, typename OC>
ScreenObserver<C,OC>::~ScreenObserver() 
{

}

template<typename C, typename OC>
void ScreenObserver<C,OC>::add(C const& c)
{
	this._queue.push_back(const_cast<C>(c));
}


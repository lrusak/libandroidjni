/*
 *      Copyright (C) 2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "Resources.h"
#include "Drawable.h"
#include "jutils-details.hpp"

using namespace jni;

CJNIDrawable CJNIResources::getDrawableForDensity(int id, int density)
{
  return call_method<jhobject>(m_object,
    "getDrawableForDensity", "(II)Landroid/graphics/drawable/Drawable;",
    id, density);
}


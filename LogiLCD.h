/********************************************************************************
Copyright (C) 2014 William Pearson <adocilesloth@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
********************************************************************************/
#pragma once
#include <obs-module.h>
#include "ending.h"

/* OLD Entry points
extern "C" __declspec(dllexport) bool LoadPlugin();
extern "C" __declspec(dllexport) void UnloadPlugin();
extern "C" __declspec(dllexport) CTSTR GetPluginName();
extern "C" __declspec(dllexport) CTSTR GetPluginDescription();
*/

OBS_MODULE_AUTHOR("William Pearson, Thomas PORTASSAU")

/*
DWORD WINAPI Mono(LPVOID);
DWORD WINAPI Colour(LPVOID);
DWORD WINAPI Dual(LPVOID);

//localisation
extern LocaleStringLookup *pluginLocale;
#define PluginStr(text) pluginLocale->LookupString(TEXT2(text))
*/
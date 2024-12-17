#pragma once

#include "inc/natives.h"
#include "inc/enums.h"

namespace BLIPS
{
	void SetBlipName(Blip blip, const char* name);
	Blip Create(float x, float y, float z, int sprite, eBlipColor color, const char* name);
}
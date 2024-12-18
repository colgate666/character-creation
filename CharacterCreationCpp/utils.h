#pragma once

#include "mainScript.h"
#include "inc/types.h"
#include "inc/enums.h"
#include <string>

namespace UTILS {
	int ranInt(const int& max, const int& min);
	float ranFloat();
	float ranFloat(float max);
	bool can_open_outfitmenu(OutInCoords& p_active_location);
	bool can_open_loadingmenu();
	bool can_open_creationmenu();
	bool can_open_hospitalmenu();
	bool can_open_barbershopmenu(OutInCoords& p_active_location);
	bool can_open_tattoomenu(OutInCoords& p_active_location);
	size_t ranInt(const size_t& max, const size_t& min);
	bool isInRange(const Vector3& a, const Vector3& b, const float& range);
	void loadModel(Hash model);
	void unloadModel(Hash model);
	bool is_main_character();
	bool is_main_character_2();
	bool is_freemode_character();
	eGender get_gender();
	Vector3 aroundCoords(float distance, Vector3 coords);
	std::string getLabel(std::string name);
}
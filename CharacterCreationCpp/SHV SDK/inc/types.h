/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2015
*/

#pragma once

#include <windows.h>

typedef DWORD Void;
typedef DWORD Any;
typedef DWORD uint;
typedef DWORD Hash;
typedef int Entity;
typedef int Player;
typedef int FireId;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int CarGenerator;
typedef int Group;
typedef int Train;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Interior;
typedef int Blip;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int Camera;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Sphere;
typedef int ScrHandle;

#pragma pack(push, 1)
struct Vector3_t {
	float x;
	DWORD _paddingx;
	float y;
	DWORD _paddingy;
	float z;
	DWORD _paddingz;

	Vector3_t(float _x, float _y, float _z) : x(_x), y(_y), z(_z), _paddingx(0), _paddingy(0), _paddingz(0) {}
	Vector3_t() : x(0), y(0), z(0), _paddingx(0), _paddingy(0), _paddingz(0) {}
};
typedef struct Vector3_t Vector3;
#pragma pack(pop)

#pragma pack(push, 1)
struct Vector4_t {
	float x;
	DWORD _paddingx;
	float y;
	DWORD _paddingy;
	float z;
	DWORD _paddingz;
	float w;
	DWORD _paddingw;

	Vector4_t(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w), _paddingx(0), _paddingy(0), _paddingz(0), _paddingw(0) {}
};
typedef struct Vector4_t Vector4;
#pragma pack(pop)

#pragma pack(push, 1)
struct Vector2_t {
	float x;
	DWORD _paddingx;
	float y;
	DWORD _paddingy;

	Vector2_t(float _x, float _y) : x(_x), y(_y), _paddingx(0), _paddingy(0) {}
};
typedef struct Vector2_t Vector2;
#pragma pack(pop)
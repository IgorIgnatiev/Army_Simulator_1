#pragma once
#include"C_Weapon_Low_Distance.h"
class C_One_Handed_Sword :
	C_Weapon_Low_Distance
{
public:
	C_One_Handed_Sword() : C_Weapon_Low_Distance(0, USING_ONE_HANDED) {}
	C_One_Handed_Sword(short len) : C_Weapon_Low_Distance(len, USING_ONE_HANDED) {}
};
#pragma once
#include"C_Weapon_Low_Distance.h"
class C_Two_Handed_Sword :
	C_Weapon_Low_Distance
{
public:
	C_Two_Handed_Sword() : C_Weapon_Low_Distance(0, USING_TWO_HANDED) {}
	C_Two_Handed_Sword(short len) : C_Weapon_Low_Distance(len, USING_TWO_HANDED) {}
};


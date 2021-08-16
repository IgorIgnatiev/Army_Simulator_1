#pragma once
#include"C_Weapon_High_Distance.h"
class C_Bow :
	C_Weapon_High_Distance
{
public:
	C_Bow() : C_Weapon_High_Distance()
	{
		this->stick_length = 0;
	}
	C_Bow(int distance, short len) : C_Weapon_High_Distance(distance)
	{
		this->stick_length = len;
	}
private:
	short stick_length;
};

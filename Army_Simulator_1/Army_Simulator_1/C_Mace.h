#pragma once
#include"C_Weapon_Low_Distance.h"
#include"E_Types.h"
class C_Mace :
	C_Weapon_Low_Distance
{
public:
	C_Mace() : C_Weapon_Low_Distance(0, USING_ONE_HANDED)
	{
		this->_type = TYPE_BAR;
	}
	C_Mace(E_Types type) : C_Weapon_Low_Distance(0, USING_ONE_HANDED)
	{
		this->_type = type;
	}
private:
	E_Types _type;
};

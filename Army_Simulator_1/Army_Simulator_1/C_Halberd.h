#pragma once
#include"C_Weapon_Low_Distance.h"
#include"E_Types_Of_Axe.h"
class C_Halberd :
	C_Weapon_Low_Distance
{
public:
	C_Halberd() : C_Weapon_Low_Distance(0, USING_TWO_HANDED)
	{
		this->_type = E_Types_Of_Axe::TYPE_CONVEX;
	}
	C_Halberd(E_Types_Of_Axe _type) : C_Weapon_Low_Distance(0, USING_TWO_HANDED)
	{
		this->_type = _type;
	}
private:
	E_Types_Of_Axe _type;
};
#pragma once
#include"C_Weapon_Low_Distance.h"
#include <ostream>
class C_One_Handed_Sword :
	C_Weapon_Low_Distance
{
public:
	C_One_Handed_Sword() : C_Weapon_Low_Distance(0, USING_ONE_HANDED) {}
	C_One_Handed_Sword(short len) : C_Weapon_Low_Distance(len, USING_ONE_HANDED) {}
	void set(short len, E_Usings use)
	{
		this->length_of_edge = len;
		this->use = use;
	}
	explicit operator C_Weapon_Low_Distance()
	{
		return C_Weapon_Low_Distance(this->length_of_edge, this->use);
	}
	friend std::ostream& operator<<(std::ostream& out, const C_One_Handed_Sword obj)
	{
		out << (C_Weapon_Low_Distance)obj << "\n";
		return out;
	}
};
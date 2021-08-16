#pragma once
#include"C_Weapon.h"
#include"E_Usings.h"
class C_Weapon_Low_Distance :
	C_Weapon
{
protected:
	short length_of_edge;
	E_Usings use;
public:
	C_Weapon_Low_Distance() : C_Weapon(DISTANCE_LOW)
	{
		this->length_of_edge = 0;
		this->use = E_Usings::USING_ONE_HANDED;
	}
	C_Weapon_Low_Distance(short length, E_Usings _using) : C_Weapon(DISTANCE_LOW)
	{
		this->length_of_edge = length;
		this->use = _using;
	}

	explicit operator C_Weapon()
	{
		return C_Weapon(this->distance);
	}
	friend std::ostream& operator<<(std::ostream& out, const C_Weapon_Low_Distance& obj)
	{
		out << (C_Weapon)obj << "Length of edge: " << obj.length_of_edge << "\n";
		if (obj.use == USING_ONE_HANDED)
		{
			out << "Using: one-handed\n";
		}
		else
		{
			out << "Using: two-handed\n";
		}
		return out;
	}
};

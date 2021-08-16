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
	explicit operator C_Weapon_High_Distance()
	{
		return C_Weapon_High_Distance(this->distance_metres);
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Bow obj)
	{
		out << (C_Weapon_High_Distance)obj << "Stick length: " << obj.stick_length << "\n";
		return out;
	}
private:
	short stick_length;
};

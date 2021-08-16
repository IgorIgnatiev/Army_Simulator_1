#pragma once
#include"E_Distances.h"
#include<ostream>
class C_Weapon
{
protected:
	E_Distances distance;
public:
	C_Weapon()
	{
		this->distance = E_Distances::DISTANCE_LOW;
	}
	C_Weapon(E_Distances distance);

	friend std::ostream& operator <<(std::ostream& out, const C_Weapon& obj)
	{
		if (obj.distance == DISTANCE_HIGH)
		{
			out << "Distance: high\n";
		}
		else
		{
			out << "Distance: low\n";
		}
		return out;
	}
};


#pragma once
#include"C_Weapon_Low_Distance.h"
#include"E_Types_Of_Axe.h"
#include<ostream>
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
	void set(E_Types_Of_Axe type)
	{
		this->length_of_edge = 0;
		this->use = USING_TWO_HANDED;
		this->_type = type;
	}
	friend std::ostream& operator<<(std::ostream& out, const C_Halberd& obj)
	{
		out << "\nUse: ";
		if (obj.use == USING_ONE_HANDED)
		{
			out << "one-handed\n";
		}
		else
		{
			out << "two-handed\n";
		}
		out << "Type: ";
		if (obj._type == TYPE_CONVEX)
		{
			out << "convex\n";
		}
		else if (obj._type == TYPE_CRESCENT)
		{
			out << "crescent\n";
		}
		else
		{
			out << "flat\n";
		}
		return out;
	}
private:
	E_Types_Of_Axe _type;
};
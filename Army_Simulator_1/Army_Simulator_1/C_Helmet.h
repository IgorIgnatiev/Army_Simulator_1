#pragma once
#include"C_Armor.h"
#include<ostream>
class C_Helmet
	: C_Armor
{
public:
	C_Helmet() : C_Armor()
	{
		this->_head_coverage = 0;
	}
	C_Helmet(E_Armor_Types type, E_Materials material, short coverage) : C_Armor(type, material)
	{
		this->_head_coverage = coverage;
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Helmet& obj)
	{
		out << (C_Armor)obj;
		out << "Head coverage: " << obj._head_coverage << "\n";
		return out;
	}
	explicit operator C_Armor()
	{
		return C_Armor(this->type, this->material);
	}
private:
	short _head_coverage;
};

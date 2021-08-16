#pragma once
#include"C_Armor.h"
class C_Breastplate
	: C_Armor
{
public:
	C_Breastplate() : C_Armor()
	{
		this->_length = 0;
	}
	C_Breastplate(E_Armor_Types type, E_Materials material, short _length) : C_Armor(type, material)
	{
		this->_length = _length;
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Breastplate& obj)
	{
		out << (C_Armor)obj;
		out << "Head coverage: " << obj._length << "\n";
		return out;
	}
	explicit operator C_Armor()
	{
		return C_Armor(this->type, this->material);
	}
	void set_type(E_Armor_Types type)
	{
		this->type = type;
	}
	void set_material(E_Materials material)
	{
		this->material = material;
	}
	void set_length(short l)
	{
		this->_length = l;
	}
private:
	short _length;
};
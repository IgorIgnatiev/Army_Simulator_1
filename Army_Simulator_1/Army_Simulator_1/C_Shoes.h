#pragma once
#include"C_Armor.h"
class C_Shoes
	: C_Armor
{
public:
	C_Shoes() : C_Armor()
	{
		this->_size = 0;
	}
	C_Shoes(E_Armor_Types type, E_Materials material, short _size) : C_Armor(type, material)
	{
		this->_size = _size;
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Shoes& obj)
	{
		out << (C_Armor)obj;
		out << "Head coverage: " << obj._size << "\n";
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
	void set_size(short s)
	{
		this->_size = s;
	}
private:
	short _size;
};
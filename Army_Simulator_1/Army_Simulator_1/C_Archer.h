#pragma once
#include"C_Helmet.h"
#include"C_Breastplate.h"
#include"C_Shoes.h"
#include"C_Bow.h"
#include<ostream>
class C_Archer
{
public:
	C_Archer()
	{
		this->helmet.set_head(15);
		this->helmet.set_type(ARMOR_TYPE_LIGHT);
		this->helmet.set_material(MATERIAL_CHAIN_MAIL);
		this->breastplate.set_length(70);
		this->breastplate.set_type(ARMOR_TYPE_LIGHT);
		this->breastplate.set_material(MATERIAL_CHAIN_MAIL);
		this->shoes.set_size(40);
		this->shoes.set_type(ARMOR_TYPE_LIGHT);
		this->shoes.set_material(MATERIAL_CHAIN_MAIL);
		this->weapon.set(DISTANCE_HIGH, 150, 50);
	}

	friend std::ostream& operator<<(std::ostream& out, const C_Archer& obj)
	{
		out << "Archer:\nHelmet: " << obj.helmet << "\nBreastplate: " << obj.breastplate << "\nShoes: " << obj.shoes << "\nBow: " << obj.weapon << "\n";
		return out;
	}
private:
	C_Helmet helmet;
	C_Breastplate breastplate;
	C_Shoes shoes;
	C_Bow weapon;
};
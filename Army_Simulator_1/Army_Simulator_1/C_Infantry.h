#pragma once
#include"C_Helmet.h"
#include"C_Breastplate.h"
#include"C_Shoes.h"
#include"C_One_Handed_Sword.h"
#include<ostream>
class C_Infantry
{
public:
	C_Infantry()
	{
		this->helmet.set_head(15);
		this->helmet.set_type(ARMOR_TYPE_HEAVY);
		this->helmet.set_material(MATERIAL_BRIGANDINE);
		this->breastplate.set_length(72);
		this->breastplate.set_type(ARMOR_TYPE_HEAVY);
		this->breastplate.set_material(MATERIAL_BRIGANDINE);
		this->shoes.set_size(40);
		this->shoes.set_type(ARMOR_TYPE_HEAVY);
		this->shoes.set_material(MATERIAL_BRIGANDINE);
		this->weapon.set(12, USING_ONE_HANDED);
	}

	friend std::ostream& operator<<(std::ostream& out, const C_Infantry& obj)
	{
		out << "Infantry:\nHelmet: " << obj.helmet << "\nBreastplate: " << obj.breastplate << "\nShoes: " << obj.shoes << "\nSword: " << obj.weapon << "\n";
		return out;
	}
private:
	C_Helmet helmet;
	C_Breastplate breastplate;
	C_Shoes shoes;
	C_One_Handed_Sword weapon;
};
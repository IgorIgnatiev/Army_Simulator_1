#pragma once
#include "E_Armor_Types.h"
#include"E_Material.h"
#include<ostream>
class C_Armor
{
public:
	C_Armor()
	{
		this->type = E_Armor_Types::ARMOR_TYPE_HEAVY;
		this->material = MATERIAL_BRIGANDINE;
	}
	C_Armor(E_Armor_Types type, E_Materials material)
	{
		this->type = type;
		this->material = material;
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Armor& obj)
	{
		if (obj.type == E_Armor_Types::ARMOR_TYPE_HEAVY)
		{
			out << "Type: heavy\n";
		}
		else
		{
			out << "Type: light\n";
		}
		if (obj.material == MATERIAL_BRIGANDINE)
		{
			out << "Material: brigandine\n";
		}
		else if (obj.material == MATERIAL_CHAIN_MAIL)
		{
			out << "Material: chain mail\n";
		}
		else if (obj.material == MATERIAL_LAMELLAR)
		{
			out << "Material: lamellar\n";
		}
		else
		{
			out << "Material: scale\n";
		}
		return out;
	}
protected:
	E_Armor_Types type;
	E_Materials material;
};
#pragma once
#include "C_Weapon.h"
class C_Weapon_High_Distance :
    public C_Weapon
{
public:
    C_Weapon_High_Distance() : C_Weapon(DISTANCE_HIGH)
    {
        this->distance_metres = 0;
    }
    C_Weapon_High_Distance(int _distance) : C_Weapon(DISTANCE_HIGH)
    {
        this->distance_metres = _distance;
    }

    friend std::ostream& operator <<(std::ostream& out, const C_Weapon_High_Distance obj)
    {
        out << (C_Weapon)obj << "Distance in metres: " << obj.distance_metres << "\n";
        return out;
    }
    explicit operator C_Weapon()
    {
        return C_Weapon(this->distance);
    }
protected:
    int distance_metres;
};


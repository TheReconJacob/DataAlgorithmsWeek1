#include "Weapon.h"
#include <iostream>

bool Weapon::operator==(const Weapon& rhd)
{
	return (Weapon::id == rhd.id);
}
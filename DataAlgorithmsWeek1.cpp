#include <iostream>
#include <vector>
#include "Weapon.h"

int main()
{
    std::vector<Weapon> weapons;
    std::vector<Weapon>::iterator weaponsIdentifier;
    std::vector<Weapon>::iterator weaponToDelete;
    for (int i = 0; i <= 9; i++)
    {
        weapons.push_back(i);
    }

    weaponToDelete = find(weapons.begin(), weapons.end(), 5);

    weapons.erase(weaponToDelete);

    for (weaponsIdentifier = weapons.begin(); weaponsIdentifier != weapons.end(); weaponsIdentifier++)
    {
        std::cout << (*weaponsIdentifier).id << std::endl;
    }
}

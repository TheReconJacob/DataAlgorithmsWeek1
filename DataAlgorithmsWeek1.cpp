#include <iostream>
#include <vector>
#include "Weapon.h"

int main()
{
    std::vector<Weapon> weapons;
    std::vector<Weapon>::iterator weaponsIdentifier;
    for (int i = 0; i <= 9; i++)
    {
        weapons.push_back(i);
    }
    for (weaponsIdentifier = weapons.begin(); weaponsIdentifier != weapons.end(); weaponsIdentifier++)
    {
        std::cout << (*weaponsIdentifier).id << std::endl;
    }
}

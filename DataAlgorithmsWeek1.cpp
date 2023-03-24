#include <iostream>
#include "Entity.h"

Entity operator++(Entity& e)
{
    return e = Entity(e.size + 1);
}

Entity operator--(Entity& e)
{
    return e = Entity(e.size - 1);
}

int main()
{
    Entity entityPlus = Entity(4);
    Entity entityMinus = Entity(4);

    ++entityPlus;
    --entityMinus;

    std::cout << "EntityPlus value is: " << entityPlus.size << std::endl;
    std::cout << "EntityMinus value is: " << entityMinus.size << std::endl;
}

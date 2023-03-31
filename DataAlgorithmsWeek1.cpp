#include <iostream>
#include <vector>
#include "IOObject.h"

int main()
{
    IOObject* iOObject = new IOObject();
    int factorialResult = iOObject->factorialR(4);

    std::cout << factorialResult << std::endl;
}

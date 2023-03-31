#include "IOObject.h"
#include <iostream>
#include <windows.h>

void IOObject::DisplayIntLessThan(int n)
{
	--n;
	std::cout << n << std::endl;
	if (n > 0) {
		DisplayIntLessThan(n);
	}
	std::cout << n << std::endl;
}

int IOObject::factorial(int n) {
	int t, result;
	result = 1;
	for (t = 1; t <= n; t++) result *= t;
	return result;
}
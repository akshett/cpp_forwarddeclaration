#include <iostream>
#include "subtract.h"

int add(int x, int y);

int main()
{
	int a(5);
	int b(4);
	int x = add(a,b);
	std::cout << "Add: " << x <<'\n';
	int y = subtract(a,b);
	std::cout<< "Subtract: " << y << '\n';
}

int add(int x, int y)
{
	return x+y;
}

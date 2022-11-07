#include <iostream>
#define G 9.80665
int main()
{
	float t, x;
	std::cin >> t;
	x=0.5*G*t*t;
	std::cout << x;
}

#include <iostream>

using namespace std;

template <typename T>
void myswap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 3, b = 4;
	std::cout << "交换前 a:" << a << ", b: " << b << std::endl;
	myswap(a,b);
	std::cout << "交换后 a:" << a << ", b: " << b << std::endl;

	double c = 12.6, d = 6.3;
	std::cout << "交换前 c:" << c << ", d: " << d << std::endl;
	myswap(c,d);
	std::cout << "交换后 c:" << c << ", d: " << d << std::endl;
	return 0;
}

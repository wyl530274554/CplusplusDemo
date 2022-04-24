#include <iostream>

using namespace std;

int method(int a, int b)
{
	int temp = a + b;

	//不写return
	std::cout << "a:" << a << ", b:" << b << std::endl;

	// return temp;
}

int main()
{
	int a = 10, b = 10;
	int ret = method(a, b);
	std::cout << "ret:" << ret << std::endl;
	return 0;
}

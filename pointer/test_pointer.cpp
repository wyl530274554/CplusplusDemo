#include <iostream>

int main()
{
	int a = 8;
	int *p = &a;
	std::cout << "p:" << p << std::endl;
	std::cout << "*p:" << *p << std::endl;

	const char * c = "hello";
	std::cout << c << "---" << *c <<"---" <<(void *)c<<std::endl;
}

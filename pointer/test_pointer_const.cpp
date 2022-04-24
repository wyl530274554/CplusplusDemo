#include <iostream>

/**
 * @brief 常量指针和指针常量
 * const int *p；//常量指针（先读const），*p为常量
 * int *const p; //指针常量(先读指针，*在前，const在后)，p为常量
 */
int main()
{
	int a = 8;
	const int *p = &a; //常量指针：是指向常量的指针。指针可变；值不能变（因为值是常量）
	std::cout << "*p:" << *p << std::endl;

	int b = 10;
	p = &b;
	std::cout << "*p:" << *p << std::endl;
	// not allowed chang the value
	//*p = 30;
	int *const q = &b; //指针常量：存储的指针被定性为常量。指针不可变；值能变／／
	std::cout << "*q:" << *q << std::endl;
	*q = 30;
	std::cout << "*q:" << *q << std::endl;
	// not allowed chang the pointer
	// q = &a;

	const int *const t = &a; //指针和值都不可修改
	std::cout << "*t:" << *t << std::endl;
	// not allowed change the value & pointer
	// t = &b;
	//*t = 40;
}

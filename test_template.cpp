#include <iostream>

using namespace std;

template <typename M>
class Person
{

};

template <class T, int SIZE>
T add1(T t1, T t2)
{
	return (t1 + t2) * SIZE;
}

template <class T>
T add(T t1, T t2)
{
	return t1 + t2;
}

int main()
{
	int ret = add(1, 2);
	std::cout << "ret:" << ret << std::endl;

	double ret1 = add(1.6, 2.7);
	std::cout << "ret1:" << ret1 << std::endl;

	//下面这种不行，一个参数是int，一个参数是double
	// int ret2 = add(3, 2.7);
	// std::cout << "ret2:" << ret2 << std::endl;

	//下面这种会将所有参数强制转换
	int ret3 = add<int>(3, 2.7);
	std::cout << "ret3:" << ret3 << std::endl;

	//常规模板形参，必须是常量，比如这里的4。这样写好像没有什么意义，没有抽象出什么东西，还更具体了	
	int ret4 = add1<int, 4>(5, 6);
	std::cout << "ret4:" << ret4 << std::endl;
	return 0;
}

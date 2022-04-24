#include <iostream>
#include <unistd.h>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	string inputStr;
	std::cout << "输入内容：";
	std::cin >> inputStr;

	ofstream f1("DATA.TXT");
	f1 << inputStr;
	f1.close();

	ifstream f2("DATA.TXT");
	string s;
	if (f2.good())
		f2 >> s;
	f2.close();
	std::cout << s << std::endl;

	while (1)
	{
		sleep(3);
	}
	return 0;
}

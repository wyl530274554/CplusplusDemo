#include <iostream>
#include <string>

using namespace std;

int main()
{
	string birthdayStr;
	cout << "please input birthday 2: ";
	cin >> birthdayStr;

	int year = atoi(birthdayStr.substr(0, 4).c_str());
	int month = atoi(birthdayStr.substr(4, 2).c_str());
	int day = atoi(birthdayStr.substr(6, 2).c_str());

	cout << "year: " << year << endl;
	cout << "month: " << month << endl;
	cout << "day: " << day << endl;

	return 0;
}

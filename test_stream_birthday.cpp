#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char birthdayStr[8];
	cout << "please input birthday: ";
	cin >> birthdayStr;

	char year[5];
	memcpy(year, birthdayStr, 4);
	year[4] = '\0';

	char month[2];
	memcpy(month, birthdayStr + 4, 2);
	int imonth = atoi(month);

	char day[2];
	memcpy(day, birthdayStr + 6, 2);
	int iday = atoi(day);

	cout << "year: " << year << endl;
	cout << "month: " << imonth << endl;
	cout << "day: " << iday << endl;

	return 0;
}

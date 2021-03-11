#include "../../../../std_lib_facilities.h"

int main()
{
	string num;
	cout << "Enter a number between 0-4 to be typed out\n";
	cin >> num;

	if ((num == "zero") || (num == "Zero"))
		cout << "0";
	else if ((num == "one") || (num == "One"))
		cout << "1";
	else if ((num == "two") || (num == "Two"))
		cout << "2";
	else if ((num == "three") || (num == "Three"))
		cout << "3";
	else if ((num == "Four") || (num == "four"))
		cout << "4";
}

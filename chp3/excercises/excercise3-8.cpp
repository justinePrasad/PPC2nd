#include "../../../../std_lib_facilities.h"

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
		
	int remainder;
	remainder = num % 2;

	if (remainder == 1)
	{
		cout << num << " is a odd number\n";
	}
	if (remainder == 0)
		cout << num << " is a even number\n";
}

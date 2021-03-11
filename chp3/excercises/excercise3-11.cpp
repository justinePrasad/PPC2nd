#include "../../../../std_lib_facilities.h"

int main()
{	
	double pennies;
	cout << "How many pennies do you have\n";
	cin >> pennies;

	double nickels;
	cout << "How many nickels do you have\n";
	cin >> nickels;

	double dimes;
	cout << "How many dimes do you have\n";
	cin >> dimes;

	double quarters;
	cout << "How many quarters do you have\n";
	cin >> quarters;

	double dollar;
	cout << "How many half-dollar coins do you have\n";
	cin >> dollar;

	double sum = ((pennies*1) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (dollar * 50)) / 100;
	cout << "You have " << pennies << " pennies\n"
		<< "You have " << nickels << " nickels\n"
		<< "You have " << dimes << " dimes\n"
		<< "You have " << quarters << " quarters\n"
		<< "You have " << dollar << " half-dollar coins\n"
		<< "The total value of your coins is $" << sum;
  
	return 0;
}

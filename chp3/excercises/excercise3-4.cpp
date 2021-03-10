#include "../../../../std_lib_facilities.h"

int main()
{
  //user input for value 1
	int val1;
	cout << "Number 1: \n";
	cin >> val1;
	
  //user input for value 1
	int val2;
	cout << "Number 2: \n";
	cin >> val2;
  
  //comparison statement
	if (val1 > val2)
		cout << val1 << " is the larger number\n" << val2 << " is the smaller number\n";
	else
		cout << val2 << " is the larger number\n" << val1 << " is the smaller number\n";
	
  //print info to user
	cout <<  "The sum is " << val1 + val2 << "\n"
		<< "The difference is " << val1 - val2 << "\n"
		<< "The product is " << val1 * val2 << "\n"
		<< "The ratio is " << val1 << ":" << val2 << "\n";
}

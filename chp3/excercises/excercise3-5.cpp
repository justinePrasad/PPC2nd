#include "../../../../std_lib_facilities.h"

int main()
{
	double val1;
	cout << "Number 1: \n";
	cin >> val1;
	
	double val2;
	cout << "Number 2: \n";
	cin >> val2;

	if (val1 > val2)
		cout << val1 << " is the larger number\n" << val2 << " is the smaller number\n";
	else
		cout << val2 << " is the larger number\n" << val1 << " is the smaller number\n";
	
	cout <<  "The sum is " << val1 + val2 << "\n"
		<< "The difference is " << val1 - val2 << "\n"
		<< "The product is " << val1 * val2 << "\n"
		<< "The ratio is " << val1 << ":" << val2 << "\n";
  //Values hold more data and is more precise than integers
}

#include "../../../../std_lib_facilities.h"

int main()
{	
	double a;
	double b;
	cout << "Enter a operation followed by two numbers\n";
	string operation{ " " };

	cin >> operation >>a >> b;
	
	if ((operation == "+") || (operation == "plus"))
		cout << a << " + " << b << " equals " << a + b;
	else if ((operation == "-") || (operation == "minus"))
		cout << a << " - " << b << " equals " << a - b;
	else if ((operation == "/") || (operation == "divdie"))
		cout << a << " / " << b << " equals " << a / b;
	else if ((operation == "*") || (operation == "multiply"))
		cout << a << " * " << b << " equals " << a * b;
	else
		cout << "You entered invalid number";
  
	return 0;
}

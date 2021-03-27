#include "../../../../std_lib_facilities.h"

int main()
{
	double val1{ 0 }, val2{ 0 };
	char operand{ '\0' };

	cin >> val1 >> val2;
	cin >> operand;

	if (operand == '+')
	{
		cout << "Answer: " << val1 + val2;
	}
	else if (operand == '-')
	{
		cout << "Answer: " << val1 - val2;
	}
	else if (operand == '*')
	{
		cout << "Answer: " << val1 * val2;
	}
	else if (operand == '/')
	{
		cout << "Answer: " << val1 / val2;
	}
	else
	{
		cout << "Enter two values and a operand ( +, -, * /)";
	}

    return 0;
}

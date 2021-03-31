#include "../../../../std_lib_facilities.h"

	vector <string> values = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string intro{ "Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').\n" };


	int stringToInt(string value)
{
			for (int i = 0; i < values.size(); i++)
			{
				if (values[i] == value)
					return i;
			}

		cout << "Digit not in vector\n";
		cout << intro;
		return -1;
}

	vector<char> validOperators{ '+','-','*','/' };
	string inputOperator{ "Enter a valid operator ('+','-','*','/')\n" };


	bool checkValidOperator(char oper)
	{
		for (char o : validOperators)
		{
			if (oper == o)
				return true;
		}
		cout << inputOperator;
		return false;
	}

int main()
{
	cout << intro;
	int op, op1, op2;
	string opString;
	char operation{'\0'};
	vector <int> operand(2);
	bool validOperators{ true };
	
	while (true)
	{
		int i = 0;
			//checks for valid inputs
			while (i < operand.size())
			{
				if (cin >> op)
				{
					operand[i] = op;
					i++;
				}
				else
				{
					cin.clear();
					cin >> opString;
					if (opString == "|")
					{
						return 0;
					}
					else
					{
						int result = stringToInt(opString);
						if (-1 != result)
						{
							operand[i] = result;
							i++;
						}
					}

				}
			}

			while (!validOperators)
			{
				if (cin >> operation)
					validOperators = checkValidOperator(operation);
				else
					cout << inputOperator;
			}

			op1 = operand[0];
			op2 = operand[1];

			switch (operation)
			{
			case '+':
				cout << "The sum of " << op1 << " and " << op2 << " is " << op1 + op2 << '\n';
				break;
			case '-':
				cout << "The difference of " << op1 << " and " << op2 << " is " << op1 - op2 << '\n';
				break;
			case '*':
				cout << "The product of " << op1 << " and " << op2 << " is " << op1 * op2 << '\n';
				break;
			case '/':
				if (op2 == 0)
					cout << "ERROR: Division by zero\n";
				else
					cout << "The division of " << op1 << " and " << op2 << " is " << op1 / op2 << '\n';
				break;
			default:
				cout << "The operator " << operation << " is not supported!\n";
				break;
			}
			cout << intro;
			cin.clear();
	}
    return 0;
}

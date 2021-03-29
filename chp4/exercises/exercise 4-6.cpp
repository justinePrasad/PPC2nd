#include "../../../../std_lib_facilities.h"

	vector <string> values = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string intro = "Enter integer digits from 0 to 9 which will be converted to spelled-out digits, or vice versa (followed by 'Enter')\n";

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

	string intToString(int value)
	{
		if(value >= 0 && value <= 9)
			return values[value];
		cout << "Digit not in vector\n";
		cout << intro;
		return " ";
}
	
int main()
{
	cout << intro;
	int value;
	string digit;
	bool validInput{ true };
	
	while (validInput)
	{
		if (cin >> value)
		{
			string result = intToString(value);
			if (result != " ")
				cout << result << '\n';
		}
		else
		{	
			//to clear cin to input again
			cin.clear();
			cin >> digit;
			if (digit == "|")
				validInput = false;
			int result = stringToInt(digit);
			if (result != -1)
			{
				cout << result <<'\n';
			}

		}
	}

    return 0;
}

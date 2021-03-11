int main()
{
	string val1;
	string val2;
	string val3;

	cout << "Enter three strings: \n";
	cin >> val1 >> val2 >> val3;
	string smallest;
	string middle;
	string largest;

	//3 cases for finding the smallest string
	if ((val1 <= val2) && (val1 <= val3))
	{
		smallest = val1;
		//compares between remaining numbers for larger string
		if (val2 >= val3)
		{
			largest = val2;
			middle = val3;
		}
		else
		{
			largest = val3;
			middle = val2;
		}
	}

	else if ((val2 <= val1) && (val2 <= val3))
	{
		smallest = val2;
		if (val1 >= val3)
		{
			largest = val1;
			middle = val3;
		}
		else
		{
			largest = val3;
			middle = val1;
		}
	}

	else if ((val3 <= val2) && (val3 <= val1))
	{
		smallest = val3;
		if (val1 >= val2)
		{
			largest = val1;
			middle = val3;
		}
		else
		{
			largest = val2;
			middle = val1;
		}
	}
	
	cout << "Strings in order(smallest to largest): " << smallest << ", " <<
		middle << ", " <<
		largest << ", ";
}

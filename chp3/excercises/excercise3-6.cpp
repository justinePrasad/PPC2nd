#include "../../../../std_lib_facilities.h"

int main()
{
	int val1;
	int val2;
	int val3;

	cout << "Enter three numbers: \n";
	cin >> val1 >> val2 >> val3;
	int smallest;
	int middle;
	int largest;

	//3 cases for finding the smallest number
	if ((val1 <= val2) && (val1 <= val3))
	{
		smallest = val1;
		//compares between remaining numbers for larger numbers
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
	
	cout << "Numbers in order(small to large): " << smallest << ", " <<
		middle << ", " <<
		largest << ", ";
}

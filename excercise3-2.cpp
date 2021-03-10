// excercise3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../../std_lib_facilities.h""

int main()
{
	double miles;
	cout << "Enter miles to be converted to kilometers: ";
	cin >> miles;
	
	double km = miles * 1.609;
	cout << miles << " miles is " << km << " kilometers \n";
}

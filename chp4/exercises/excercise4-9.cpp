#include "../../../../std_lib_facilities.h"


int main()
{

	int riceOnCurrSquare{1};
	int riceOnPrevSquare{0};

	double driceOnCurrSquare{1};
	double driceOnPrevSquare{0};
	int square{1}; //position for of each square

	for(int i = 0; i < 1023 ; i++)//allows each desired amount to be reached
	{
			
			cout << "Square: " << square++ << '\n'
			<< "\tGrain on Current Square(int): " << riceOnCurrSquare << '\n'
			<< "\tGrain on previous Square(int): " << riceOnPrevSquare << '\n'
			<< "\tTotal Grain so far(int): " << riceOnPrevSquare + riceOnCurrSquare << '\n';
			
			riceOnPrevSquare += riceOnCurrSquare;
			riceOnCurrSquare *= 2;

			cout << "\n";

			cout << "\tGrain on Current Square(double): " << driceOnCurrSquare << '\n'
			<< "\tGrain on previous Square(double): " << driceOnPrevSquare << '\n'
			<< "\tTotal Grain so far(double): " << driceOnPrevSquare + driceOnCurrSquare << '\n';

			driceOnPrevSquare += driceOnCurrSquare;
			driceOnCurrSquare *=2;
	
	}

	cout << '\n' << "Total Number of Grain held by int: " << riceOnPrevSquare + riceOnCurrSquare << '\n' 
	<< "Total Number of Grain held by double: " << driceOnPrevSquare + driceOnCurrSquare; 
	//Ater square value of 1023, double is displayed as inf
	return 0;
}

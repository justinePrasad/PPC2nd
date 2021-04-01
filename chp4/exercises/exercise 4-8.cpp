#include "../../../../std_lib_facilities.h"


int main()
{
	vector<int> desiredRice{1000, 1'000'000, 1'000'000'000};

	int riceOnCurrSquare{1};
	int riceOnPrevSquare{0};
	int square{1}; //position for of each square
  
  //allows each desired amount to be reached
	for(int i = 0; i < desiredRice.size(); i++)
	{
		//keeps track of pervious squares and current
		while( desiredRice[i] > riceOnPrevSquare + riceOnCurrSquare){
			
			cout << "Square: " << square++ << '\n'
			<< "\tGrain on Current Square: " << riceOnCurrSquare << '\n'
			<< "\tGrain on previous Square: " << riceOnPrevSquare << '\n'
			<< "\tTotal Grain so far: " << riceOnPrevSquare + riceOnCurrSquare << '\n';

			riceOnPrevSquare+=riceOnCurrSquare;
			riceOnCurrSquare*=2;//doubles each square
		}
		 cout << "To give the inventor at least " << desiredRice[i] << " grains, " << square << " squares are required.\n";
        cout << "Grains at square " << square << ": " << riceOnCurrSquare << '\n';
        cout << "With the rice on the previous squares this results in " << riceOnPrevSquare + riceOnCurrSquare << " total grains for the inventor.\n\n";


		//values are reset for new iteration 
        square = 1;
        riceOnCurrSquare = 1;
        riceOnPrevSquare = 0;
	}
	return 0;
}


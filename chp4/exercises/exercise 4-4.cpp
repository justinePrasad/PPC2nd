#include "../../../../std_lib_facilities.h"

int main()
{
	int number{50};

	//Definde upper + lower bound
	int upper{100};
	int lower{1};
	int range{upper - lower};
	int half{range/2};

	//empty char set
	char answer{'\0'};
	int question{0};

	cout << "Pick a number between " << lower << " and " << upper << "\n";
	
	while( lower != upper)
	{
		range = upper - lower;
		if(range == 1 && number < half){
			number = upper;
		}
		else if (range == 1 && number > half){
			number = upper;
		}
		else
		{
			number = lower + range/2;
		}

		cout << question + 1 << ". Is the number you are thinking of less than " 
		<< number << "? (Enter 'y' or 'n') \n";

		cin >> answer;
		if ('y' == answer){
			upper = number-1;
			question++;
		} else if('n' == answer){
			lower = number;
			question++;
		} else{
			cout << "Please Enter 'y' or 'no' \n";
		}


	}
	 cout << "The number you are thinking of is " << lower << "\n";
    cout << "I needed " << question << " guesses.\n";

    return 0;
}
//From https://programming-principles-and-pratice-using-c.readthedocs.io/en/latest/ch4-computation.html#exercise-04

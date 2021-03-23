#include "../../../../std_lib_facilities.h"

int main()
{	
	vector <string> words;
	vector <string> disliked;
	
	cout << "Enter a list of words you dislike\n" << "Enter ;: to terminate\n";
	for (string temp; cin >> temp;)
	{	
		//If termination character is inputed, break for loop
		if (temp == ";:")
		{
			break;
		}
		disliked.push_back(temp);
	}

	cout << "Enter a list of words\n";
	//input stream for words to be entered
	for (string temp; cin >> temp;)
		words.push_back(temp);
	
	for (int i = 0; i < words.size(); i++) 
	{
		for (string x : disliked)
		{
			if (words[i] == x) 
				cout << "BLEEP\n";
			else
				cout << words[i] << "\n";
			// After each word, break out of loop to go to next word
			break;
		}
	}
	return 0;
}

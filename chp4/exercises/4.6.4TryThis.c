#include "../../../../std_lib_facilities.h"

int main()
{	
	vector <string> words;
	vector <string> disliked;
	
	cout << "Enter a list of words you dislike\n" << "Enter ;: to terminate\n";
	for (string temp; cin >> temp;)
	{
		if (temp == ";:")
		{
			break;
		}
		disliked.push_back(temp);
	}

	cout << "Enter a list of words\n";
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
			break;
		}
	}
	return 0;
}

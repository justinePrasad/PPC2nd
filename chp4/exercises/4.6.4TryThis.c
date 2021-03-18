#include "../../../../std_lib_facilities.h"

int main()
{	
	vector <string> words;
	vector <string> disliked = { "qew", "qwe" };
	
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
		}
	}
	return 0;
}

#include "../../../../std_lib_facilities.h"

double findMedian(vector <double> arr)
{
	sort(arr);
	int i = arr.size() / 2;
	floor(i);
	return arr[i];
}

int main()
{
	cout << "Enter some tempreatures in (Enter | to terminate) \n";
		vector<double> temps;
		for (double temp; cin >> temp;)
			temps.push_back(temp);
		cout << "The median is " << findMedian(temps);
		return 0;
}

#include "../../../../std_lib_facilities.h"

int main()
{
	vector <double> distances;
	for (double distance; cin >> distance;)
		distances.push_back(distance);
	sort(distances);
  
	cout << "Smallest Distance: " << distances[0] << "\n"
		<< "Greatest Distance: " << distances[distances.size() - 1] << "\n";
	double sum = (distances[0] + distances[distances.size() - 1]) / 2;
	cout << "The mean between the two distances is " << sum << "\n";
}

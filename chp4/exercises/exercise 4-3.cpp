#include "../../../../std_lib_facilities.h"

int main()
{	
	double sum = 0;
	vector <double> distances;

	for (double distance; cin >> distance;)
		distances.push_back(distance);
	sort(distances);

	for (auto temp : distances) {
		sum += temp;
	}
	cout << "Sum of all values is " << sum << "\n";
	cout << "Smallest Distance: " << distances[0] << "\n"
		<< "Greatest Distance: " << distances[distances.size() - 1] << "\n";
	double mean = (distances[0] + distances[distances.size() - 1]) / 2;
	cout << "The mean between the two distances is " << mean << "\n";
}

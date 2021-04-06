#include <iostream>
#include <vector>

using namespace std;

void miniMaxSum(vector<int> arr) {
	int auxMin = arr[0];
	int auxMax = arr[0];
	long long sumaMin = 0;
	long long sumaMax = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (auxMin > arr[i]) {
			auxMin = arr[i];
		}
		if (auxMax < arr[i]) {
			auxMax = arr[i];
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		sumaMax += arr[i];
		sumaMin += arr[i];
	}
	sumaMax -= auxMin;
	sumaMin -= auxMax;
	cout << sumaMin << " " << sumaMax << endl;

	cout << "--------------------" << endl;
	if (sumaMax == 2744467344)
	{
		cout << "max OK" << endl;
	}
	cout << "greseala " <<  sumaMax - 2744467344 << endl;
	if (sumaMin == 2063136757) {
		cout << "min OK" << endl;
	}
	cout << "greseala " << sumaMin - 2063136757 << endl;


	cout << "--------------------" << endl;
	if (auxMax == 938071625)
	{
		cout << "max OK" << endl;
	}
	if (auxMin == 256741038) {
		cout << "min OK" << endl;
	}
		//2063136757 2744467344
	//256741038 938071625
}

int main() {
	vector<int> arr = { 256741038, 623958417, 467905213, 714532089, 938071625};

	miniMaxSum(arr);

	return 0;
}
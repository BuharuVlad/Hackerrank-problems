#include <iostream>
#include <vector>

using namespace std;

int diagonalDiference(vector<vector<int>> arr) {
	int diagPrin = 0, diagSec = 0, difDig = 0;

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (i == j) {
				diagPrin += arr[i][j];
				cout << arr[i][j] << " ";
			}
		}
	}
	cout << endl << diagPrin << endl;

	for (int i = 0; i < arr.size(); i++) {
		for (int j = arr[i].size() - 1; j >= 0; j--) {
			if ((i + j) == (arr.size() - 1)) {
				diagSec += arr[i][j];
				cout << arr[i][j] << " ";
			}
		}
	}
	cout << endl << diagSec << endl;
	return abs(diagPrin - diagSec);
}

int main()
{
	cout << "test" << endl;

	vector<vector<int>> arr = {
		{11, 2,   4},
		{ 4, 5,   6},
		{10, 8, -12}
	};

	cout << endl << diagonalDiference(arr);

	return 0;
}
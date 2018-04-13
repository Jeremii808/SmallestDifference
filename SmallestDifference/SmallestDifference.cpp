/*
	Returns the smallest difference
	from two vectors of integers
*/
#include<iostream>
#include<algorithm>
#include<limits>
#include<vector>
#include<cmath>
using namespace std;


/*
	runtime: O(A log A + B log B)
*/
int findSmallestDifference(vector<int> &arr1, vector<int> &arr2) {
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	int a = 0, b = 0;
	int difference = numeric_limits<int>::max();

	while (a < arr1.size() && b < arr2.size()) {
		if (abs(arr1[a] - arr2[b]) < difference) {
			difference = abs(arr1[a] - arr2[b]);
		}

		if (arr1[a] < arr2[b]) {
			a++;
		}
		else {
			b++;
		}
	}
	return difference;
}

int main() {
	vector<int> arr1 = { 1, 3, 15, -11, 2 };
	vector<int> arr2 = {23, 127, -234, 19, 8};

	int difference = findSmallestDifference(arr1, arr2);
	cout << "Smallest Difference = " << difference << endl;

	system("pause");
	return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
	int n;
	float posNum = 0;
	float negNum = 0;
	float zero = 0;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}

	for (int arr_i = 0; arr_i < n; arr_i++) {
		if (arr[arr_i] < 0)
			negNum++;
		if (arr[arr_i] > 0)
			posNum++;
		if (arr[arr_i] == 0)
			zero++;
	}

	cout << fixed << setprecision(6) << posNum / arr.size() << endl;
	cout << negNum / arr.size() << endl;
	cout << zero / arr.size() << endl;
	return 0;
}

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*
	O(n^2) Time Complexity Average, O(1) Space (Auxiliary)
*/
int bubbleSort(vector<int>& arr) {
	int temp = 0; //for swapping values
	int count = 0;
	if (is_sorted(begin(arr), end(arr))) { //use STL to perform work for you (O(n) Time Complexity)
		return count;
	}
	else {
		for (int i = 0; i < arr.size() - 1; i++) {
			for (int j = 0; j < arr.size() - 1 - i; j++) {
				if (arr[j + 1] < arr[j]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					count++;
				}
			}
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	int numSwaps = bubbleSort(a);
	int first = a.front();
	int last = a.back();
	cout << "Array is sorted in " << numSwaps << " swaps." << endl;
	cout << "First Element: " << first << endl;
	cout << "Last Element: " << last << endl;
	return 0;
}

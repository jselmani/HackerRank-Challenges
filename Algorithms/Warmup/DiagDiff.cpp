#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
	int ls = 0;
	int rs = 0;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));

  // O(n^2) Time Complexity to find the sum of the Matrix
  // Not sure how to refactor but can revisit in future
	for (int a_i = 0; a_i < n; a_i++) {
		for (int a_j = 0; a_j < n; a_j++) {
			cin >> a[a_i][a_j];
			if (a_i == a_j) {
				ls += a[a_i][a_j];
			}
		}
	}
	for (int a_i = 0; a_i < n; a_i++) {
		for (int a_j = n - 1 - a_i; a_j >= 0;) {
			rs += a[a_i][a_j];
			break;
		}
	}
	cout << abs(ls - rs) << endl;
	return 0;
}

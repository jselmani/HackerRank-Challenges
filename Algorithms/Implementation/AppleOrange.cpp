#include <vector>
#include <iostream>

using namespace std;

bool isBetween(int s, int t, int temp) {
	return temp >= s && temp <= t;
}

int main() {
	int s;
	int t;
	cin >> s >> t;
	int a;
	int b;
	cin >> a >> b;
	int m;
	int n;
	cin >> m >> n;
	vector<int> apple(m);
	int aCount = 0;
	int oCount = 0;
	for (int apple_i = 0; apple_i < m; apple_i++) {
		cin >> apple[apple_i];
	}

	// check apples
	for (int i = 0; i < m; i++) {
		aCount += isBetween(s, t, apple[i] + a);
	}
	vector<int> orange(n);
	for (int orange_i = 0; orange_i < n; orange_i++) {
		cin >> orange[orange_i];
	}

	// check oranges
	for (int i = 0; i < n; i++) {
		oCount += isBetween(s, t, orange[i] + b);
	}

	cout << aCount << "\n" << oCount << endl;
	return 0;
}

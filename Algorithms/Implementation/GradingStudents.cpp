#include <vector>
#include <iostream>

using namespace std;

// more elegant solution
vector < int > solve(vector < int > grades) {
	// Complete this function
	for (int i = 0; i < grades.size(); i++) {
		if ((grades[i] != 100 && grades[i] >= 38) && grades[i] % 5 != 0) {
			if (grades[i] % 5 > 2)
				grades[i] += 5 - (grades[i] % 5);
		}
	}
	return grades;
}

int main() {
	int n;
	cin >> n;
	vector<int> grades(n);
	for (int grades_i = 0; grades_i < n; grades_i++) {
		cin >> grades[grades_i];
	}
	vector < int > result = solve(grades);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << (i != result.size() - 1 ? "\n" : "");
	}
	cout << endl;


	return 0;
}

/*

Brute Force Method

vector < int > solve(vector < int > grades) {
	// Complete this function
	for (int i = 0; i < grades.size(); i++) {
		if (grades[i] != 100 && grades[i] >= 38) {
			int temp = grades[i];
			for (int j = 0; j < 2; j++) {
				temp++;
				if ((temp % 5) != 0)
					continue;
				else
					break;
			}
			if ((temp % 5) == 0)
				grades[i] = temp;
		}
	}

	return grades;
}
*/

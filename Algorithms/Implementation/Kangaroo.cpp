#include <string>
#include <iostream>

using namespace std;

// refactored solution, utilizes parameters better
string kangaroo(int x1, int v1, int x2, int v2) {
  // Complete this function
  string result;
	if (v2 >=v1) { // edge case: second roo is as fast as first at minimum
		result = "NO";
	}
	else if ((x2 - x1) % (v2 - v1) == 0) // no remainder == will meet
		result = "YES";
	else
		result = "NO";

	return result;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

/*
Brute Force Method

string kangaroo(int x1, int v1, int x2, int v2) {
  // Complete this function
  string result;
  if (v2 > v1 && x2 > x1) {
    result = "NO";
  }
  else {
    for (int i = 0; i < 10000; i++) {
      x1 += v1;
      x2 += v2;
      if (x1 == x2) {
        result = "YES";
        break;
      }
    }
        if (result != "YES")
      result = "NO";
  }
  return result;
}
*/

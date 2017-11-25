#include <string>
#include <iostream>

using namespace std;

// Elegant, straight forward solution
int howManyWords(const string s) {
	int words = 1;
	for (int i = 0; i < s.length(); i++) {
		int wordStart = s[i];
		if (wordStart >= 65 && wordStart <= 90)
			words++;
	}
	return words;
}

int main() {
	string s;
	cin >> s;
	int wordCount = howManyWords(s);
	cout << wordCount << endl;
	return 0;
}

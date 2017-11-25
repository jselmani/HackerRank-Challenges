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
	Add helper functions instead of doing the work inline to check open/close brackets
	and matching brackets
*/

bool isOpen(char c) {
	if (c == '(' || c == '{' || c == '[') {
		return true;
	}

	return false;
}

bool isClose(char c) {
	if (c == ')' || c == '}' || c == ']') {
		return true;
	}

	return false;
}

bool isMatched(char topStack, char comp) {
	if (topStack == '(') {
		if (comp == ')')
			return true;
	}
	if (topStack == '{') {
		if (comp == '}')
			return true;
	}
	if (topStack == '[') {
		if (comp == ']')
			return true;
	}

	return false;
}

bool is_balanced(string expression) {
	stack<char> stack;
	int i = -1;
	int len = expression.length() - 1;
	while (i++ < len) {
		char curr = expression[i];
		if (isOpen(expression[i])) {
			stack.push(curr);
		}
		else if (isClose(expression[i])) {
			if (stack.empty() || !isMatched(stack.top(), expression[i])) {
				return false;
			}
			stack.pop();
		}
	}
	return stack.empty();
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		string expression;
		cin >> expression;
		bool answer = is_balanced(expression);
		if (answer)
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

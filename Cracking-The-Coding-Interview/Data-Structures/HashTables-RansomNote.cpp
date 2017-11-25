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

/********************************************************
Proposed solution

Loop 1
- insert strings as keys, and integers as values into map object if not already in map object
- if in map object, increase value by 1 at that index

Loop 2
- attempt to find key(string) from ransom array in map object
- if iterator points to end, return false
- if iterator's pointing object's value is 0, return false
- if conditions pass, index has been found and value can be decreased by 1
  to reflect the word has already been used/found.

return true if no errors occur

O(n) time complexity

*********************************************************/


bool ransom_note(vector<string> magazine, vector<string> ransom) {
	unordered_map<string, int>::iterator iter;
	unordered_map<string, int> map;
	for (auto i : magazine) {
		iter = map.find(i);
		if (iter == map.end()) {
			map.insert(pair<string, int>(i, 1));
		}
		else {
			map[i]++;
		}
	}

	for (auto i : ransom) {
		iter = map.find(i);
		if (iter == map.end()) {
			return false;
		}
		else if (iter->second == 0) {
			return false;
		}
		map[i]--;
	}

	return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

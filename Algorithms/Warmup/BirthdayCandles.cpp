#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

/*
  Using std::sort() makes this functions run-time O(n log n) Time Complexity
  on average. Would like to revisit.
*/
int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    sort(ar.begin(), ar.end());
    int tallCandle = ar[n -1];
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(tallCandle == ar[i])
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

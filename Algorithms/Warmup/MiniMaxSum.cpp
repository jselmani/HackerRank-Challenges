#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long sum = 0;
    long long arr[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
       sum += arr[arr_i];
    }

    // sort elements using std library
    // O(n log n) time complexity on average
    sort(arr, arr + 5);
    cout << sum - arr[4] << " " << sum - arr[0] << endl;

    return 0;
}

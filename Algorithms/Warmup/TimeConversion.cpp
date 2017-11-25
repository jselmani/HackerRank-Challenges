#include <string>
#include <iostream>

using namespace std;

string timeConversion(string s) {
  // Complete this function
  string newTime, hours, minSec, dayNight;
	int hh = 0;
	hours = s.substr(0, 2);
	minSec = s.substr(2, 6);
	dayNight = s.substr(8, 2);
	hh = stoi(hours);

	if (dayNight == "PM") {
		hh = (hh == 12 ? hh : hh + 12);
		hours = to_string(hh);
	}
	else if (hh == 12) {
		newTime.append("00");
	}

	if (newTime.front() == '0' && newTime.back() == '0') {
		newTime.append(minSec);
	}
	else {
		newTime.append(hours + minSec);
	}
	return newTime;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

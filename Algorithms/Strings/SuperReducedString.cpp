#include <iostream>
#include <string>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    for (int i = 0; i < (s.length()); i++) {
  		if (s[i] == s[i + 1]) {
  			s.erase(s.begin() + i); //erase twice to remove duplicates
  			s.erase(s.begin() + i);

  			if (s.length() == 0) {
  				s.append("Empty String");
  				break;
  			}
  			i = -1; //restart loop from beginning
  		}
	  }
	return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

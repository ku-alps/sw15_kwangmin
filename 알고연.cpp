#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	string a;
	vector<int> s(4);
	for (int i = 0; i < t; i++) {
		cin >> a;
		if (atoi(a.substr(4, 2).c_str()) > 0 && atoi(a.substr(4, 2).c_str()) < 13) {
			switch (atoi(a.substr(4, 2).c_str())) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (atoi(a.substr(6, 2).c_str()) > 0 && atoi(a.substr(6, 2).c_str()) < 32) {
					cout << "#" << i + 1 << " " << a.substr(0, 4) + "/" + a.substr(4, 2) + "/" + a.substr(6, 2) << endl;
				}
				else {
					cout << "#" << i + 1 << " " << "-1" << endl;
				}break;
			case 2:
				if (atoi(a.substr(6, 2).c_str()) > 0 && atoi(a.substr(6, 2).c_str()) < 29) {
					cout << "#" << i + 1 << " " << a.substr(0, 4) + "/" + a.substr(4, 2) + "/" + a.substr(6, 2) << endl;
				}
				else {
					cout << "#" << i + 1 << " " << "-1" << endl;
				}break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (atoi(a.substr(6, 2).c_str()) > 0 && atoi(a.substr(6, 2).c_str()) < 31) {
					cout << "#" << i + 1 << " " << a.substr(0, 4) + "/" + a.substr(4, 2) + "/" + a.substr(6, 2) << endl;
				}
				else {
					cout << "#" << i + 1 << " " << "-1" << endl;
				}break;



			}
		}
		else {
			cout << "#" << i + 1 << " " << "-1" << endl;
		}
		
			
		
	}
	return 0;
}
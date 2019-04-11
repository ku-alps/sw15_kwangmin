#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int t, n, command;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int v0 = 0;
		int v = 0;
		int s = 0;
		int a = 0;
		cin.ignore(100, '\n'); //문자열 버퍼 지우기
		for (int j = 0; j < n; j++) {
			string str2, str3;
			string str = "";
			getline(cin, str); //공백 포함 문자열 받는법

			if (str.length() > 2) {
				str2 = str[0];
				command = atoi(str2.c_str());
				str3 = str[2];
				a = atoi(str3.c_str());
			}
			else {
				str3 = str[0];
				command = atoi(str3.c_str());
				a = 0;
			}
			//cout << i + 1 << " " << "command: " << command << "a: " << a << endl;
			if (command == 1) {
				v = a + v0;
				s += v;
				v0 = v;
				//cout << i + 1 << " " << "command=1" << "s: " << s << endl;
			}
			else if (command == 2) {
				v = -a + v0;
				if (v > v0 || v < 0) {
					v = 0;
				}
				s += v;
				//cout << i + 1 << " " << "command=2" << "s: " << s << endl;
				v0 = v;
			}
			else if (command == 0) {
				s += v0;
				//cout << i + 1 << " " << "command=0" << "s: " << s << endl;
			}

		}
		cout << "#" << i + 1 << " " << s << "\n";
	}
	return 0;
}
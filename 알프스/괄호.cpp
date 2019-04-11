#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#define MAX_SIZE 100
using namespace std;

string Count(string s) {
	int count = 0;
	for (unsigned i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			count++;
		}
		else
			count--;
	}
	if (count == 0)
		return "YES";
	else
		return "NO";
}
int main() {
	string s;
	int n;
	cin >> n;
	while (n--) {
		cin >> s;
		cout << Count(s) << endl;
	}

	return 0;
}
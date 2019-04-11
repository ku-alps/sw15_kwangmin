#include <iostream>

using namespace std;

int main() {
	int k = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				cout << "#";
			}
			else {
				cout << "+";
			}
		}
		cout << "\n";
	}

	return 0;
}
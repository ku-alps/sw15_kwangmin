#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, n, h;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> h;
		int count = 0;
		vector<int> v1(n);
		vector<int> v2(n);
		for (int j = 0; j < n; j++) {
			cin >> v1[j];
		}
		for (int j = 0; j < n; j++) {
			cin >> v2[j];
		}
		for (int j = 1; j < n; j++) {
			if (v2[0] != 0) {
				count++;
				v2[0] = 1;
			}
			if (v1[j] >= h) {

			}
		}
		
	}
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t, n, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<int> a(n);
		int count = 1;
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		for (int j = 0; j < n; j++) {
			a[j] = abs(a[j]);
		}
		sort(a.begin(), a.end());

		for (int z = 0; z < a.size() - 1; z++) {
			if (a[0] == a[z + 1]) {
				count++;
			}
		}

		cout << "#" << i + 1 << " " << a[0] << " " << count << "\n";

	}
	return 0;
}
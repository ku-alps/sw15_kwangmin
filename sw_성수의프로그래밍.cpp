#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double result = 0;

void go(int m, double a) {
	result = (a + m) / 2;
}
int main() {
	int n, k,t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		vector<int> v(n);
		for (int j = 0; j < n; j++) {
			cin >> v[j];
		}
		sort(v.begin(), v.end(),greater<int>());
		vector<int> v2(k);
		for (int z = 0; z < k; z++) {
			v2[z] = v[z];
		}
		for (int i = k-1; i >= 0; i--) {
			go(v2[i], result);
		}
		//cout << fixed;
		cout << "#" << i + 1;
		printf(" %.6f\n", result);
		result = 0;
	}

	return 0;
}
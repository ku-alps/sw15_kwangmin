#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int d[1001];
int d2[1001];
int main() {
	int n, result = 0, result2 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		d[i] = 1;
		d2[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[j]<a[i] && d[j] + 1>d[i]) {
				d[i] = d[j] + 1;
			}
			if (a[j] > a[i] && d[j] + 1 > d[i]) {
				d2[i] = d2[j] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (result < d[i]) {
			result = d[i];
		}
		if (result2 < d2[i]) {
			result2 = d2[i];
		}
	}
	cout << result + result2 - 1;
	return 0;
}
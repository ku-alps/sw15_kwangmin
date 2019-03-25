#include <iostream>
#include <vector>

using namespace std;
int main() {
	int t;
	long long int n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		vector<long long int> a(n);
		vector<long long int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long int count = 0;
		long long int start = 0,end=0;
		for (int i = 0; i < n; i++) {
			if (i + 1 <= n-1) {
				
				if (a[i + 1] - a[i] >= 0) {
					end++;

				}
				if (start == 0 && a[i + 1] - a[i] < 0) {}
				if (start != 0 && a[i + 1] - a[i] < 0) {
					for (int i = start; i < end; i++) {
						count += (a[end] - a[i]);
					}
					cout << count;
				}
			}

		}
	}
	return 0;
}
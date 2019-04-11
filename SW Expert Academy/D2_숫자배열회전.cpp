#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<vector<long long int>> arr(n,vector<long long int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		cout << "#" << i + 1 << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[n-j-1][i];
			}
			cout << " ";
			for (int j = 0; j < n; j++) {
				cout << arr[n-1-i][n-1-j];
			}
			cout << " ";
			for (int j = 0; j < n; j++) {
				cout << arr[j][n - i - 1];
			}
			cout << endl;
		}
	}
	return 0;
}
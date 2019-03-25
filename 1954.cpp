#include <iostream>
using namespace std;
int main() {
	int t, n;
	int arr[10][10];
	
	
	cin >> t;
	
	for (int m = 0; m < t; m++) {
		cin >> n;
		
		int count = 1;
		int z = 0;
		if (n == 1) {
			cout << "#" << m + 1 << "\n"<<"1"<<"\n";
		}
		else {
			for (int k = 0; k < n / 2; k++) {
				for (int j = z; j < n - 1 - k; j++) {
					arr[k][j] = count;
					count++;
				}
				for (int i = k; i < n - 1 - k; i++) {
					arr[i][n - 1 - k] = count;
					count++;
				}
				for (int j = n - 1 - k; j > k; j--) {
					arr[n - 1 - k][j] = count;
					count++;
				}
				for (int i = n - 1 - k; i > k; i--) {
					arr[i][k] = count;
					count++;
				}
				z++;
				if (n % 2 != 0) {
					arr[n / 2][n / 2] = count;
				}
			}
			cout << "#" << m + 1 << "\n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << arr[i][j] << " ";
				}
				cout << "\n";
			}
		}
		
	
	}
	return 0;
}
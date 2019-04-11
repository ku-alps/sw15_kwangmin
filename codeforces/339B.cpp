#include <iostream>
using namespace std;

int main() {
	int n, m;
	long long int count = 0;
	cin >> n >> m;
	int arr[100000];
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	count += arr[0] - 1;
	for (int i = 1; i < m; i++) {
		if (i > 0) {
			if (arr[i] < arr[i - 1]) {
				count += (n - arr[i - 1])+(arr[i]-1)+1;
			}
			else
			{
				count += arr[i] - arr[i - 1];
			}
		}
	}
	cout << count;

	return 0;
}
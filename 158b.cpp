#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout<<i<<":"<< arr[i]<<" ";
	}
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int t;
	int n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<string> a(n);
		vector<string> stack1(n);
		vector<string> stack2(n);
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		if (n % 2 == 0) {
			for (int j = 0; j <n/2; j++) {
				stack1[j] = a[j];
				stack2[j] = a[j + n / 2];
			}
			cout << "#" << i + 1 << " ";
			for (int i = 0; i < n; i++) {
				cout << stack1[i] << " " << stack2[i] << " ";
			}
			cout << "\n";
		}
		else {
			for (int j = 0; j < (n+1) / 2; j++) {
				stack1[j] = a[j];
				if ((j + (n + 1) / 2) < n) {
					stack2[j] = a[j + (n + 1) / 2];
				}
			}
			cout << "#" << i + 1 << " ";
			for (int i = 0; i < n; i++) {
				cout << stack1[i] << " " << stack2[i] << " ";
			}
			cout << "\n";
		}
		
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int t,n;
	char a;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int result = 0;
		cin >> n;
		int count[10];
		char alpha[10];
		char arr[10][10];
		for (int j = 0; j < n; j++) {
			cin >> alpha[j] >> count[j];
			result += count[j];
		}
		int z=0, k=0, l = 0,count1=0,count2=0;
		cout << "#" << i + 1 << endl;
		while (result--) {
			arr[z][k] = alpha[l];
			k++;
			count1++;
			count2++;
			
			cout << arr[z][k-1];
			if (count2 >= 10) {
				cout << "\n";
				count2 = 0;
			}
			if (count1 >= count[l]) {
				l++;
				count1 = 0;
			}
			if (k > 9) {
				z++;
				k = 0;
			}
		}
		
		cout << endl;
	
		
	}
	return 0;
}
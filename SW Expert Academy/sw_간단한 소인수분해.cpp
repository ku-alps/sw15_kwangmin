#include <iostream>

using namespace std;
int count2 = 0, count3 = 0, count5 = 0, count7 = 0, count11 = 0;

void Fractional_decomposition(long long int num) {
	if (num % 2 == 0) {
		count2++;
		if (num / 2 != 1) {
			Fractional_decomposition(num / 2);
		}
		else
			return;
	}
	else if (num % 3 == 0) {
		count3++;
		if (num / 3 != 1) {
			Fractional_decomposition(num / 3);
		}
		else
			return;
	}
	else if (num % 5 == 0) {
		count5++;
		if (num / 5 != 1) {
			Fractional_decomposition(num / 5);
		}
		else
			return;
	}
	else if (num % 7 == 0) {
		count7++;
		if (num / 7 != 1) {
			Fractional_decomposition(num / 7);
		}
		else
			return;
	}
	else if (num % 11 == 0) {
		count11++;
		if (num / 11 != 1) {
			Fractional_decomposition(num / 11);
		}
		else
			return;
	}
}
int main() {
	long long int t,n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		Fractional_decomposition(n);
		cout << "#" << i + 1 << " " << count2 << " " << count3 << " " << count5 << " " << count7 << " " << count11 << "\n";
		count2 = 0, count3 = 0, count5 = 0, count7 = 0, count11 = 0;
		
	}
	return 0;
}
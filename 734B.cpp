#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int k2, k3, k5, k6,mindigit,result=0,mindigit2;
	cin >> k2 >> k3 >> k5 >> k6;
	if (k2 != 0 && k5 != 0 && k6 != 0) {
		mindigit = min(k2, k5);
		mindigit = min(mindigit, k6);
		k2 -= mindigit;
		k5 -= mindigit;
		k6 -= mindigit;
		result += 256 * mindigit;
		if (k2 != 0 && k3 != 0) {
			mindigit2 = min(k2, k3);
			k2 -= mindigit2;
			k3 -= mindigit2;
			result += 32 * mindigit2;
			cout << result;
		}
		else
			cout << result;
	}
	else if (k2 == 0) {
		cout << "0";
	}
	else if (k5 == 0 || k6 == 0) {
		if (k2 != 0 && k3 != 0) {
			mindigit2 = min(k2, k3);
			k2 -= mindigit2;
			k3 -= mindigit2;
			result += 32 * mindigit2;
			cout << result;
		}
		else
			cout << "0";
	}

	return 0;
}
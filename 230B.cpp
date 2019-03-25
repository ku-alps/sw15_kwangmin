#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

string prime(int x) {
	for (int i = 2; i*i<= x; i++) {
		if (x%i == 0)
			return "NO";
	}
	return "YES";
}

int main() {
	int n;
	long long x;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x!=1&&pow((int)sqrt(x), 2) == x) {
			cout << prime(sqrt(x)) << endl;
		}
		else
			cout << "NO" << endl;
	}
	return 0;
}
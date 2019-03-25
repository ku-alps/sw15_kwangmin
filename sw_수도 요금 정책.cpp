#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,p,q,r,s,w,result_a,result_b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> p >> q >> r >> s >> w;
		result_a = p * w;
		if (r >= w) {
			result_b = q;
		}
		else {
			result_b = q + (s*(w - r));
		}
		cout << "#" << i << " " << min(result_a, result_b) << "\n";
	}
	return 0;
}
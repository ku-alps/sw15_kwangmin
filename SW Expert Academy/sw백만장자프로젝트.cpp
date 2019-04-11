#include <iostream>
#include <vector>

using namespace std;
int main() {
	long long  t,n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		long long count = 0;
		vector<long long> a(n);
		vector<long long> b(n);
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		long long l = 0;
		for (int z = 0; z < n; z++) {
			if (z < n - 1) {
				if (a[z + 1] - a[z] >= 0) {
					b[l] = a[z];
					if (z + 1 == n - 1) {
						b[l + 1] = a[z + 1];
						for (int i = 0; i < l+2; i++) {
							count += (b[l + 1] - b[i]);
						}
					}
					l++;
				}
				if (l == 0 && a[z + 1] - a[z] < 0) {
					
				}
				if (l!=0&&a[z + 1] - a[z] < 0) {
					b[l] = a[z];
					for (int k = 0; k < z + 1; k++) {
						count += (b[l] - b[k]);
					}
					
					l = 0;
					

				}

			}
		}cout <<"#"<<i+1<<" "<<count<<"\n";
		
	
		
	}
	return 0;
}
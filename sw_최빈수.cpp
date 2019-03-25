#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t,n,b,count=1,begin=0,result=0,result2;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		vector<int> a;
		for (int j = 0; j < 1000; j++) {
			cin >> b;
			a.push_back(b);
		}
		sort(a.begin(),a.end());
		for (int z = 0; z < a.size()-1; z++) {
			if (a[begin] == a[z + 1]) {
				count++;
			}
			else {
				if (result <= count) {
					result = count;
					result2 = a[begin];
				}
				count = 1;
				begin = z + 1;

			}
		}
		
		cout <<"#"<<i<<" "<<result2<<"\n";
		result, result2, begin = 0;
		count = 1;
	}
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	for (int i = 0; i < 10; i++) {
		long long result = 0,count=0;
		cin >> t;
		vector<int> a(t);
		for (int i = 0; i < t; i++) {
			cin >> a[i];
		}
		for (int j = 2; j < t-2; j++) {
			if (a[j] - a[j - 1] >= 0 || a[j]-a[j+1]>=0) {
				if (a[j] - a[j - 1] >= 0) {
					count = a[j] - a[j - 1];
					if (a[j] - a[j - 2] < count) {
						if (a[j] - a[j - 2] > 0) {
							count = a[j] - a[j - 2];
						}
						else {
							count = 0;
						}
					}
					//cout <<"a[j]-a[j-1]>=0 "<< count << endl;
				}
				
				else {
					count = 0;
					//cout <<"a[j]-a[j-1]<0 "<< count << endl;
				}
				if (a[j] - a[j + 1] >= 0) {
					if (count == 0) {
						count = 0;
						//cout << "count==0 " << count << endl;
					}
					else if (a[j] - a[j + 1] < count) {
						if (a[j] - a[j + 1] > 0)
							count = a[j] - a[j + 1];
						else
							count = 0;
						//cout << "a[j]-a[j+1]<count " << count << endl;

					}
					if (a[j] - a[j + 2] < count) {
						if (a[j] - a[j + 2] > 0)
							count = a[j] - a[j + 2];
						else
							count = 0;
					//	cout << "a[j]-a[j+1]<count " << count << endl;
					}

					
				}
				else {
					count = 0;
				//	cout << "a[j]-a[j+1]<0 " << count << endl;
				}
			}
			result += count;
			//cout << "result: " <<result<< endl;
			count = 0;
		}
		cout << "#" << i + 1 << " " << result<<"\n";
	}
	
	return 0;
}
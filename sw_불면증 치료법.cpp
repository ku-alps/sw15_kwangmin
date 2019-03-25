#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int result=10;
		string n,n2;
		cin >> n;
		n2 = n;
		vector<int> v(10, 0);
		int count = 2;
		while(result!=0){
			//cout << "n2:" << n2 << endl;
			for (int i = 0; i < n2.length(); i++) {
				switch (n2[i]) {
				case '0':
					v[0] = 1;
					break;
				case '1':
					v[1] = 1;
					break;
				case '2':
					v[2] = 1;
					break;
				case '3':
					v[3] = 1;
					break;
				case '4':
					v[4] = 1;
					break;
				case '5':
					v[5] = 1;
					break;
				case '6':
					v[6] = 1;
					break;
				case '7':
					v[7] = 1;
					break;
				case '8':
					v[8] = 1;
					break;
				case '9':
					v[9] = 1;
					break;
				}

			}
			int count2 = 10;
			for (int i = 0; i < v.size(); i++) {
				count2 -= v[i];
				if (count2 == 0)
					result = 0;
			}
			n2 = to_string(atoi(n.c_str())*count);
			//cout << "n" << n2 << endl;
			count++;
			//cout << "count: " << count << " ";
		}
		cout << "#" << i + 1 << " " << atoi(n2.c_str())-atoi(n.c_str())<<endl;
		
		
	}
	return 0;
}
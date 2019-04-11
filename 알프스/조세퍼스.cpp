#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	queue<int> s;
	int count = k-1;
	for (int i = 0; i < n; i++) {
		s.push(v[count]);
		v.erase(v.begin() + count);
		count += k-1;
		if (count >= v.size()) {
			count = count % v.size();
		}
	}
	for (int i = 0; i < n; i++) {
	//	cout << s[i] << " ";
	}
	
	
	return 0;
}
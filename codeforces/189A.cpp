#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int d[4001];
int d2[4001];
int n, a, b, c;
int num(int n,int count) {
	int minimum = min(min(a, b), c);
	if (max(max(n - a, n - b), n - c) == 0) {
		count++;
		return count;
	}
	else if(max(max(n - a, n - b), n - c)>0){
		count++;
		if (max(max(n - a, n - b), n - c) % a == 0 ||
			max(max(n - a, n - b), n - c) % b == 0 ||
			max(max(n - a, n - b), n - c) % c == 0) {
			num(max(max(n - a, n - b), n - c), count);
		}
		else
			return count;
		
	}
	else if (max(max(n - a, n - b), n - c) < 0) {
		return count;
	}
	
}
int main() {
	int result=0;
	cin >> n >> a >> b >> c;
	//int count = n;

	//d[0] = n;
	d[0] = 0;
	cout << num(n,0);
	
	
	return 0;			
}

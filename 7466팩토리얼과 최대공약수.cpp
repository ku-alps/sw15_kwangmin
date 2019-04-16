#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;


vector<long long> v;
long long gcd(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}

void prime(long long n) {
	for (int i = 2; i*i<=n; i++) {
		while (n%i == 0) {
			v.push_back(i);
			n /= i;
		}
	}
	if (n > 1) {
		v.push_back(n);
	}
}

long long factorial(long long a,long long n) {
	long long num = 0;
	for (int i = n; i <= a; i*=n) {
		num += a / i;
	}
	if (num > 0) {
		return n;
	}
	else
		return 1;
	}
int main() {
	int t;
	cin >> t;
	long long n, k;
	for (int i = 0; i < t; i++) {
		long long count = 1;
		cin >> n >> k;
		prime(k);
		for (int i = 0; i < v.size(); i++) {
			count *= factorial(n,v[i]);
			cout << v[i] << " ";
		}
		cout <<"#"<<i+1<<" "<<count<< "\n";
		
		v.clear();
	}
	
	return 0;
}
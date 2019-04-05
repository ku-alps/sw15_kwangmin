#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int dp[1000];
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 2 * dp[i - 2];
	}
	cout << dp[n]%10007;

	return 0;
}
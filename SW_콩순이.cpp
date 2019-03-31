
#include <iostream>
#include <algorithm>

using namespace std;

int cases, L, K, I, R, list_input[2000], list_alp[27], mem[2000][2000];
char input;

int dp(int f, int b) {
	if (mem[f][b] >= 0) return mem[f][b];
	if (f >= b) return (mem[f][b] = 0);
	else if (list_input[f] != list_input[b]) return (mem[f][b] = min(dp(f + 1, b) + list_alp[list_input[f]], dp(f, b - 1) + list_alp[list_input[b]]));
	else if (list_input[f] == list_input[b]) return (mem[f][b] = dp(f + 1, b - 1));
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >> cases;
	for (int c = 1; c <= cases; c++) {

		cin >> L >> K;

		for (int i = 0; i < L; i++)
			for (int j = 0; j < L; mem[i][j++] = -1);

		for (int i = 0; i < L; i++) {
			cin >> input;
			list_input[i] = (int)(input - 'a');
		}

		for (int i = 0; i < K; i++) {
			cin >> I >> R;
			list_alp[i] = (I < R) ? I : R;
		}

		if (L == 1 || K == 1) {
			cout << "#" << c << " " << 0 << endl;
			continue;
		}

		cout << "#" << c << " " << dp(0, L - 1) << endl;
	}
	return 0;
}

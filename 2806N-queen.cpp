#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int T, N, res;

typedef struct Pos {
	int x;
	int y;
	Pos(int _x, int _y) :x(_x), y(_y) {};
};

bool check(vector<Pos> v, int x, int y) {
	for (vector<Pos>::iterator i = v.begin(); i != v.end(); i++) {
		if (x == i->x || y == i->y) return false;
		if (abs(x - i->x) == abs(y - i->y))return false;
	}
	return true;
}

void dp(vector<Pos> v, int x, int y) {
	if (x != N - 1)dp(v, x + 1, y); // 맨 오른쪽부터 가서 거꾸로 볼거란 얘기
	if (!check(v, x, y))return; // 여기 못 놓으면 리턴
	if (y == N - 1) { // 여기가 마지막 행이면, 결과 +1 하고 리턴
		res++;
		return;
	}
	v.push_back(Pos(x, y)); // 지금 퀸의 위치 벡터에 넣어주고
	dp(v, 0, y + 1); // 다음 줄
}

int main()
{
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;

		res = 0;

		vector<Pos> v;
		dp(v, 0, 0);

		cout << "#" << t << " " << res << endl;
	}
	return 0;
}
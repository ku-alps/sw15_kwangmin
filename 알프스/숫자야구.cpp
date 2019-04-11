#include <string>
#include <vector>
#include <iostream>

using namespace std;
int count = 0;
bool check(string s, int base, int st, int bl) { 
	//111~999������ ���ڿ� �Է¹��� ������ strike,ball��
	int strike = 0, ball = 0;
	string s2 = to_string(base);

	for (int i = 0; i < 3; i++) {
		if (s[i] == s2[i]) {
			strike++;
		}
	}for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j && s[i] == s2[j]) {
				ball++;
			}
		}
	}
	if (st == strike && bl == ball) {
		return true;
	}
	else {
		return false;
	}

}

int solution(vector<vector<int>> baseball) {
	int answer = 0;
	string s;
	for (int i = 111; i <= 999; i++) { 
		//111~999������ ���ڸ� �ݺ��Ͽ� �ִ´�.
		int flag = false;
		int strike = 0, ball = 0, count2 = 0;
		s = to_string(i);
		for (int i = 0; i < 3; i++) {
			//�Է¹��� ���ڵ��� ���� �ٸ� �����̰� 1~9�μ������� �ɷ�����.
			for (int j = 0; j < 3; j++) {
				if ((i != j && s[i] == s[j]) || s[j] == '0') {
					flag = true;
					break;
				}
			}
			if (flag == true)
				break;
		}
		if (flag == true) {
			continue;
		}
		for (int j = 0; j < baseball.size(); j++) {
			if (!check(s, baseball[j][0], baseball[j][1], baseball[j][2])) {
				break;
			}
			count2++;
		}
		if (count2 == baseball.size()) {
			count++;
		}
	}
	answer = count;
	return answer;
}
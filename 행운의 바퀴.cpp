#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k,s,count=0;
	char letter;
	cin >> n >> k;
	vector<char> v(n);
	fill(v.begin(), v.end(), '?'); //배열 전부 ? 로 채움
	//cin >> s >> letter;
	/*
	if (s <= n) {
		v[s - 1] = letter;
		count += s-1;
	}
	else
	{
		v[s%n - 1] = letter;
		count += (s % n)-1;
	}*/
	for (int i = 0; i < k; i++) {
		cin >> s >> letter;
		if (s <= n) { //입력 받은 수가 주어진 n보다 작을경우
			if (s + count <= n - 1) { //count를 통해 다음 알파벳이 어디들어갈지 위치지정
				                      //넣을 수가 배열의 끝을 넘어가지 않는경우
				if (v[count + s] == '?') {
					v[count + s] = letter;
					count += s;
				}
				else { //이미 들어있는 곳에 들어간다면
					cout << "!";
					return 0;
					
				}
				
			}
			else {
				if (v[count + s - n] == '?') {
					v[count + s - n] = letter;
					count = count + s - n;
				}
				else { //이미 들어간곳에 들어간다면
					cout << "!";
					return 0;
					

				}
				
			}
		}
		else { //넣을 수가 배열을 넘어갈 경우 
			if (v[count + s - n] == '?') {
				v[count + s - n] = letter;
				count = count + s - n;
			}
			else {
				cout << "!";
				return 0;
			}
		}

	}
	for (int i = 1; i < n; i++) {
		if (v[i] == v[i - 1])
			{
				cout << "!";
				return 0;
			}
	}
	for (int i = 0; i < n; i++) {
		cout << v[count--];
			
		if (count < 0) {
			count = n - 1;
		}
	}
	return 0;
}
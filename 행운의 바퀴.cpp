#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k,s,count=0;
	char letter;
	cin >> n >> k;
	vector<char> v(n);
	fill(v.begin(), v.end(), '?'); //�迭 ���� ? �� ä��
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
		if (s <= n) { //�Է� ���� ���� �־��� n���� �������
			if (s + count <= n - 1) { //count�� ���� ���� ���ĺ��� ������ ��ġ����
				                      //���� ���� �迭�� ���� �Ѿ�� �ʴ°��
				if (v[count + s] == '?') {
					v[count + s] = letter;
					count += s;
				}
				else { //�̹� ����ִ� ���� ���ٸ�
					cout << "!";
					return 0;
					
				}
				
			}
			else {
				if (v[count + s - n] == '?') {
					v[count + s - n] = letter;
					count = count + s - n;
				}
				else { //�̹� ������ ���ٸ�
					cout << "!";
					return 0;
					

				}
				
			}
		}
		else { //���� ���� �迭�� �Ѿ ��� 
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
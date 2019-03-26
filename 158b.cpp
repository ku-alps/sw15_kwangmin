#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int arr[100000];
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, result = 0;;
	int arr2[4];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		switch (arr[i]) {
		case 1:
			count1++;
			arr2[0] = count1;
			break;
		case 2:
			count2++;
			arr2[1] = count2;
			break;
		case 3:
			count3++;
			arr2[2] = count3;
			break;
		case 4:
			count4++;
			arr2[3] = count4;
			break;
		}
	}
	result += arr2[3];
	if (arr2[2] >= arr2[0]) {
		result += arr2[2];
		arr2[0] = 0;
	}
	else if (arr2[2] < arr2[0]) {
		result += arr2[2];
		arr2[0] -= arr2[2];
	}
	if (((arr2[1] * 2) + arr2[0]) % 4 == 0) {
		result += ((arr2[1] * 2) + arr2[0]) / 4;
	}
	else
		result += (((arr2[1] * 2) + arr2[0]) / 4) + 1;
	cout << result;

	return 0;
}
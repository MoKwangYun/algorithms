#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	int result = a * b * c;

	int arr[10] = {0,};

	for (int i = 0; i < 9; i++) {
		
		if (result == 0)
			break;

		int num = result % 10;
		arr[num] += 1;
		result = result/10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}
#include<bits/stdc++.h>

using namespace std;

void sw(int arr[], int a, int b) {
	int temp[20] = {};

	for (int i = a, j = 0; i <= b; i++) {
		temp[j++] = arr[i];
	}

	for (int i = b, j = 0; i >= a; i--) {
		arr[i] = temp[j++];
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	int a, b;

	for (int i = 0; i < 10; i++) {
		cin >> a >> b;

		sw(arr, a - 1, b - 1);
	}


	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}

	return 0;

}
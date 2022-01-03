#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[9];
	int result[7];

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	

	for (int i = 0; i < 8; i++) {
		int sum = 0;

		for (int j = i + 1; j < 9; j++) {
			sum = 0;
			
			for (int k = 0, a = 0; k < 9; k++) {
				if (k != i && k != j)
					result[a++] = arr[k];
			}

			for (int l = 0; l < 7; l++) {
				sum += result[l];
			}

			if (sum == 100)
				break;
		}

		if (sum == 100)
			break;
	}

	sort(result, result + 7);
	for (int m = 0; m < 7; m++) {
		cout << result[m] << "\n";
	}

	return 0;
}
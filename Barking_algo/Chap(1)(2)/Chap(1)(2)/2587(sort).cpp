#include<bits/stdc++.h>

using  namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[5] = {100, 100, 100, 100, 100};
	int r;
	int sum = 0;
	int temp;


	for (int i = 0; i < 5; i++) {
		cin >> r;
		sum += r;

		for (int j = 0; j < 5; j++) {
			if (r < arr[j]) {
				temp = arr[j];
				arr[j] = r;
				r = temp;
			}
		}
	}

	cout << (sum / 5) << "\n" << arr[2];
	
}

/*
#include<algorithm>
- sort �Լ��� ����� ���

sort(arr, arr + 5);  --> �ι�° ���ڿ��� + �迭 ũ��

�迭 arr�� �������� ����

sort(arr, arr + 5, desc);  --> �������� ����

*/
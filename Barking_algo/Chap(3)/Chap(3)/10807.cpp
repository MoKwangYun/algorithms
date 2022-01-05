#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int x;

	cin >> x;

	int count = 0;

	for (int i = 0; i < N; i++) {
		if (arr[i] == x)
			count++;
	}

	cout << count;

	return 0;
}
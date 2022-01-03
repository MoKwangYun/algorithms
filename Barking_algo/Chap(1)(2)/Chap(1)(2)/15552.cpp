#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << "\n";


	return 0;
}
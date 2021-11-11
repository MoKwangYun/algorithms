#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


using namespace std;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N, X;

	cin >> N >> X;
	int *a = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int j = 0; j < N; j++) {
		if (a[j] < X)
			cout << a[j] << ' ';
	}

	delete[] a;

	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int count = N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j + 1 <= count)
				cout << "*";
			else
				break;
		}
		if (i + 1 != N) {
			cout << "\n";
			count--;
		}
	}
}
#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int count = 1;

	for (int i = 0; i < N; i++) {
		for (int j = N; j > 0; j--) {
			if (count >= j)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
		count++;
	}
}
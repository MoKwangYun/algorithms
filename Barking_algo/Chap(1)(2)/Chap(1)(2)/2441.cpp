#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int M = N;
	for (int j = 0; j < M; j++) {
		for (int i = M; i > 0; i--) {
			if (i > N) {
				cout << " ";
			}
			else
				cout << "*";
		}
		N--;
		cout << "\n";
	}
}
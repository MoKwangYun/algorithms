#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int count = N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			if (j == count) {
				cout << "*";
			}
			else if (j >= count && j <= 2 * N - count) {
				cout << "*";
			}
			else
				cout << " ";

			
		}
		cout<<"\n";
		count--;
	}


}
#include<bits/stdc++.h>

using  namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r;
	int sum = 0;
	int min = 100;
	int count = 0;

	for (int i = 0; i < 7; i++) {
		cin >> r;

		if (r % 2 != 0) {
			sum += r;
			count++;

			if (r < min)
				min = r;
		}
	}

	if (count == 0)
		cout << -1;
	else
		cout << sum << "\n" << min;

	return 0;
}
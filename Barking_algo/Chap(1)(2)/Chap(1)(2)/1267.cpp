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

	int y = 0;
	int m = 0;
	int Ysum = 0;
	int Msum = 0;

	for (int i = 0; i < N; i++) {
		int a = arr[i] / 30;
		//if ((arr[i] % 30) != 0 ) {
			Ysum += (a + 1) * 10;
		//}

		int b = arr[i] / 60;
		//if ((arr[i] % 60) != 0) {
			Msum += (b + 1) * 15;
		//}

	}

	if (Ysum > Msum) {
		cout << "M" << " " << Msum;
	}
	else if (Ysum < Msum) {
		cout << "Y" << " " << Ysum;
	}
	else
		cout << "Y" << " " <<"M" << " " << Ysum;

	return 0;

}
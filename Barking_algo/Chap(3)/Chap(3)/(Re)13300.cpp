#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	int g[6] = {};
	int b[6] = {};


	for (int i = 0; i < N; i++) {
		int x = 0;
		int y = 0;
		cin >> x >> y;

		if (x == 0) {
			switch (y) {
				case 1: {
					g[0]++;
					break;
				}
				case 2: {
					g[1]++;
					break;
				}
				case 3: {
					g[2]++;
					break;
				}
				case 4: {
					g[3]++;
					break;
				}
				case 5: {
					g[4]++;
					break;
				}
				case 6: {
					g[5]++;
					break;
				}
			}
		}

		else if (x == 1) {
			switch (y) {
				case 1: {
					b[0]++;
					break;
				}
				case 2: {
					b[1]++;
					break;
				}
				case 3: {
					b[2]++;
					break;
				}
				case 4: {
					b[3]++;
					break;
				}
				case 5: {
					b[4]++;
					break;
				}
				case 6:{
					b[5]++;
					break;
				}
			}
		}
	}

	int count = 0;

	for (int i = 0; i < 6; i++) {
		if (g[i] != 0) {
			
			count += g[i] / K;

			if (g[i] % K != 0)
				count++;
		}

		if (b[i] != 0) {
			
			count += b[i] / K;
		
			if (b[i] % K != 0)
				count++;
		}

		//cout << g[i] <<" "<< b[i];
	}

	cout << count;
}
#include<bits/stdc++.h>

using namespace std;

int getRealLength(char* arr);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int *pos = new int[N];

	for (int i = 0; i < N; i++) {
		char one[1000];
		char two[1000];

		cin >> one >> two;

		int len1 = getRealLength(one);
		int len2 = getRealLength(two);

		//cout << len1 << len2;
		

	}
}

int getRealLength(char* arr) {
	int len = 0;
	// 값이 0이면, 값이 설정되지 않은 인덱스임
	while (arr[len] !='\0') { // 값이 '\0'이 나올 때까지 루프를 돔('\0' == 쓰레기값)
		len++;
	}
	return len;
}

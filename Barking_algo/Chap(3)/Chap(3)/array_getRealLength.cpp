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
	// ���� 0�̸�, ���� �������� ���� �ε�����
	while (arr[len] !='\0') { // ���� '\0'�� ���� ������ ������ ��('\0' == �����Ⱚ)
		len++;
	}
	return len;
}

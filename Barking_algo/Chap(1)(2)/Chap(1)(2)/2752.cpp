#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c; // �Է�
	cin >> a >> b >> c;
	int d, e, f; // ũ�� ������ ����� �� ��
	d = min({ a,b,c });
	f = max({ a,b,c });
	e = a + b + c - d - f;
	cout << d << ' ' << e << ' ' << f;

	return 0;
}
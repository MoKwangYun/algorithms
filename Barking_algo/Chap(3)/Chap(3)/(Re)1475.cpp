#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    // ans = 1�� �����μ� N = 0�϶��� ���� ����ó���� �ڿ������� ��������
    int N, a[10] = {}, ans = 1;
    cin >> N;

    // �ڸ��� ����
    while (N) {
        a[N % 10]++;
        N /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;
        ans = max(ans, a[i]);
    }
    // (a[6]+a[9])/2�� �ø��� ���� 6, 9�� ���� �ʿ��� ��Ʈ�� ���̹Ƿ� (a[6]+a[9]+1)/2�� ���
    ans = max(ans, (a[6] + a[9] + 1) / 2);
    cout << ans;
}
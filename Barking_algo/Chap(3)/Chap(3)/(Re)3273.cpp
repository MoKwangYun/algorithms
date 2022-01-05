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

	int x;
	cin >> x;

	sort(arr, arr + N);

	int count = 0;
	int l = 0;
	int r = N - 1;


	while (1) {
		if (l >= r)
			break;

		int sum = arr[l] + arr[r];

		if (sum == x) {
			count++;
			l++;
			r--;
		}
		else if (sum > x)
			r--;
		else if (sum < x)
			l++;

	}

	cout << count;
}

/*
- ������ ���� ���� �������� ���Ľ�Ų��

- �糡���� �����ϴ� �������ͷ� �����Ѵ�

- While���� ������ ���δ� l�� r�� ���ų� ũ��! (���ٰ� �ϸ� ��Ÿ�� ���� �߻��� ���� �ִ�. �Ʒ��� ���ð� ����!)

������
- �� ���� ���� Target�� ���ٸ� ����++, ������--�� ����

- �� ���� ���� Target���� �۴ٸ� ���� Ŀ���� �ϹǷ� ����++

- �� ���� ���� Target���� ũ���� ���� �۾������ϹǷ� ������--
*/

/*  vector���
int num, a, target;
	cin >> num;
	vector<int> v;
	for (int i = 0; i < num; i++) {
		cin >> a;
		v.push_back(a);
	}
	cin >> target;
	sort(v.begin(), v.end());
	int l = 0, r = num-1, cnt = 0;

	while (1) {
		if (l >= r)
			break;
		int sum = v[l] + v[r];
		if (sum == target) {
			cnt++;
			l++;
			r--;
		}
		else if (sum < target)
			l++;
		else
			r--;
	}
	cout << cnt;
	return 0;
*/
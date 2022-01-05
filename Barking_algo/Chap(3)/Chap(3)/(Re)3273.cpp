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
- 정렬을 통해 수를 오름차순 정렬시킨다

- 양끝에서 시작하는 투포인터로 접근한다

- While문이 끝나는 경우로는 l이 r과 같거나 크면! (같다고만 하면 런타임 에러 발생할 수도 있다. 아래에 예시가 존재!)

더보기
- 두 수의 합이 Target과 같다면 왼쪽++, 오른쪽--를 수행

- 두 수의 합이 Target보다 작다면 수가 커져야 하므로 왼쪽++

- 두 수의 합이 Target보다 크가면 수가 작아져야하므로 오른쪽--
*/

/*  vector사용
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
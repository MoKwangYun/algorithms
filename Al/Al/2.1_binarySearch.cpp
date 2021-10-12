//이분탐색 재귀적 알고리즘 -> 배열의 크기는 홀수이든 짝수이든 상관 X
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int func(int* arr, int x, int low, int high) {

	int mid = (low + high) / 2;
	if (low > high)//탈출 조건
		return 0;

	if (arr[mid] == x) {
		return mid;
	}
	else if (arr[mid] < x) {
		return func(arr, x, mid + 1, high);
	}
	else
		return func(arr, x, low, mid - 1);


}


int main() {

	int N;
	cin >> N;
	int* arr = new int[N] {};

	for (int i = 0; i < N; i++) {
		cin >> arr[i]; //이분검색의 전제 : 배열은 정렬되어 있다!(여기선 오름차순) 
	}

	int x;
	printf("찾고자 하는 값: ");
	scanf("%d", &x);

	//printf("%d", sizeof(arr) / sizeof(int) - 1);

	int index = func(arr, x, 0, N - 1);
	if (index == 0) {
		printf("%d는 배열에 없습니다.", x);
	}
	else {
		printf("%d는 배열의 [%d]에 위치", x, index);
	}

	return 0;
}
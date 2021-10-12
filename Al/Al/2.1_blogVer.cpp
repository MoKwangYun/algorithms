#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int func(int* arr, int x, int low, int high) {

	int mid = (low + high) / 2;
	if (low > high)//탈출 조건
		return -1;

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

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int x;
	printf("찾고자 하는 값: ");
	scanf("%d", &x);

	//printf("%d", sizeof(arr) / sizeof(int) - 1);

	int index = func(arr, x, 0, sizeof(arr) / sizeof(int) - 1);
	if (index == -1) {
		printf("%d는 배열에 없습니다.", x);
	}
	else {
		printf("%d는 배열의 [%d]에 위치", x, index);
	}

	return 0;
}
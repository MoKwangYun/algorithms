#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int func(int* arr, int x, int low, int high) {

	int mid = (low + high) / 2;
	if (low > high)//Ż�� ����
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
	printf("ã���� �ϴ� ��: ");
	scanf("%d", &x);

	//printf("%d", sizeof(arr) / sizeof(int) - 1);

	int index = func(arr, x, 0, sizeof(arr) / sizeof(int) - 1);
	if (index == -1) {
		printf("%d�� �迭�� �����ϴ�.", x);
	}
	else {
		printf("%d�� �迭�� [%d]�� ��ġ", x, index);
	}

	return 0;
}
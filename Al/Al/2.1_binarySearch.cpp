//�̺�Ž�� ����� �˰��� -> �迭�� ũ��� Ȧ���̵� ¦���̵� ��� X
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int func(int* arr, int x, int low, int high) {

	int mid = (low + high) / 2;
	if (low > high)//Ż�� ����
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
		cin >> arr[i]; //�̺а˻��� ���� : �迭�� ���ĵǾ� �ִ�!(���⼱ ��������) 
	}

	int x;
	printf("ã���� �ϴ� ��: ");
	scanf("%d", &x);

	//printf("%d", sizeof(arr) / sizeof(int) - 1);

	int index = func(arr, x, 0, N - 1);
	if (index == 0) {
		printf("%d�� �迭�� �����ϴ�.", x);
	}
	else {
		printf("%d�� �迭�� [%d]�� ��ġ", x, index);
	}

	return 0;
}
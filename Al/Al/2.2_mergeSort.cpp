#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int arr2[100];
void merge(int* arr, int low, int high) {

	int mid = (low + high) / 2;

	int i = low; //���� ���� ���ҵ� �� ���� �ε���
	int j = mid + 1; //���� ���� ���� �� ���� �ε���
	int k = low; //arr2�迭�� ���յ� ���Ҹ� �ӽ� �����ϱ� ���� �ε���

	while (i <= mid && j <= high) {
		/*

		���� �� ���Ҹ� ����Ű�� i�� mid���� Ŀ���ų�
		���� �� ���Ҹ� ����Ű�� j�� high���� Ŀ���� �ȴٸ� �� �̻� �񱳰� �Ұ���������!!

		*/

		if (arr[i] < arr[j]) {

			/*
			���� ���� ���� �� arr2�� �̹� ������ �� ���Ҹ� �����ϰ�
			�� �տ� ��ġ�� ���Ұ�
			���� ���� ���� �̹� ������ �� ���Ҹ� �����ϰ�
			�� �տ� ��ġ�� ���Һ��� Ŭ ���(�������� ������ �����ϱ� ������ ���� �� ���� arr2�� ����)

			���� �ش� ���Ҹ� arr2�� k�� �ε����� ������ ��
			���� �ݺ��� ���� ���� ���� ���� �ε���, ���� ���� ����� arr2�� ����� �ε�����
			���� j++ , k++
			*/

			arr2[k] = arr[i];
			k++;
			i++;

			//arr2[k++] = arr[i++]; �� ����
		}
		else {

			arr2[k++] = arr[j++];
		}
	}

	if (i <= mid) {
		/* ���� ���ҵ��� ���� arr2�� ������ ���� ���ҵ��� ���� arr2 �迭�� ���� ���� ���
		�̷��� ���� ������ ���ҵ麸�� ������ ���� ���ҵ��� ū ����̹Ƿ� arr2�� �״�� �־��ش�.
		(����, ���� ������ ������ ���� 1�� �� �϶����� ������ �����ϱ� ������ ����, ���������� �̹� ������ ���ִ� ����)
		*/
		while (i <= mid) {
			arr2[k++] = arr[i++];
		}
	}

	else {

		while (j <= high) {
			arr2[k++] = arr[j++];
		}
	}

	for (int a = low; a <= high; a++) {
		arr[a] = arr2[a]; //�ӽ� �迭�� ���ĵ� ���ҵ��� arr �迭�� ����
	}
}



void partition(int* arr, int low, int high) {

	int mid;
	if (low < high) {

		mid = (low + high) / 2;
		partition(arr, low, mid);
		partition(arr, mid + 1, high);
		merge(arr, low, high);

	}
}

int main() {

	int arr[] = { 27, 10,12,20,25,13,15,22 };


	partition(arr, 0, sizeof(arr) / sizeof(int) - 1);
	/* sizeof(arr) == 8 * 4 (���� ���� * int Ÿ�� ũ��)
	sizeof(int) == 4
	int high���� ������ ������ �ε����� ���� �ϱ� ������  -1
	*/

	for (int i = 0; i <= (sizeof(arr) / sizeof(int) - 1); i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
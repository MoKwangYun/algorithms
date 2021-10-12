#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int arr2[100];
void merge(int* arr, int low, int high) {

	int mid = (low + high) / 2;

	int i = low; //좌측 분할 원소들 비교 위한 인덱스
	int j = mid + 1; //우측 부할 원소 비교 위한 인덱스
	int k = low; //arr2배열에 병합된 원소를 임시 저장하기 위한 인덱스

	while (i <= mid && j <= high) {
		/*

		좌측 비교 원소를 가리키는 i가 mid보다 커지거나
		우측 비교 원소를 가리키는 j가 high보다 커지게 된다면 더 이상 비교가 불가능해진다!!

		*/

		if (arr[i] < arr[j]) {

			/*
			우측 분할 원소 중 arr2로 이미 대입이 된 원소를 제외하고
			맨 앞에 위치한 원소가
			좌측 불한 원소 이미 대입이 된 원소를 제외하고
			맨 앞에 위치한 원소보다 클 경우(오름차순 정렬을 가정하기 때문에 작은 값 먼저 arr2에 저장)

			좌측 해당 원소를 arr2의 k번 인덱스에 대입한 뒤
			다음 반복시 비교할 우측 분할 원소 인덱스, 다음 비교의 결과로 arr2에 저장될 인덱스를
			위해 j++ , k++
			*/

			arr2[k] = arr[i];
			k++;
			i++;

			//arr2[k++] = arr[i++]; 와 동일
		}
		else {

			arr2[k++] = arr[j++];
		}
	}

	if (i <= mid) {
		/* 우측 원소들을 전부 arr2에 들어갔지만 좌측 원소들이 아직 arr2 배열에 들어가지 못한 경우
		이러한 경우는 우측의 원소들보다 좌측의 남은 원소들이 큰 경우이므로 arr2에 그대로 넣어준다.
		(좌측, 우측 원소의 개수가 각각 1개 씩 일때부터 병합을 진행하기 때문에 좌측, 우측끼리는 이미 정렬이 되있는 상태)
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
		arr[a] = arr2[a]; //임시 배열에 정렬된 원소들을 arr 배열에 저장
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
	/* sizeof(arr) == 8 * 4 (원소 개수 * int 타입 크기)
	sizeof(int) == 4
	int high에는 마지막 원소의 인덱스가 들어가야 하기 때문에  -1
	*/

	for (int i = 0; i <= (sizeof(arr) / sizeof(int) - 1); i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
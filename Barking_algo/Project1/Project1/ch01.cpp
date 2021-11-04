//https://blog.encrypted.gg/922
//1�� �ð����⵵, �����ڷ���, �Ǽ��ڷ���
#include<iostream>

using namespace std;

int func(int arr[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 5 == 0)
			cnt++;
	}
	return cnt;
}
//�ð� ���⵵ = 1(cnt = 0) + 1(i = 0) + n(2 + 2 + 1) + 1(return) = 5n + 3

//����1
int func1(int N) {

	int total = 0;

	for (int i = 0; i < N; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}

	return total;
}
// �ð� ���⵵ O(N) - N�� ��

//����2
int func2(int arr[], int N) {

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100)
				return 1;
		}
	}

	return 0;
}
//�ð� ���⵵ O(N^2)  -->  �� Ƚ�� (N-1) + (N - 2) + (N - 3) + ... + 2 + 1 = (N^2 - N)/2 = N^2 

//����3
int func3(int N) {
	for (int i = 1; i * i <= N; i++) {
		if (i * i == N)
			return 1;
	}

	return 0;
}
//�ð����⵵ : O(��ƮN)

//����4
int func4(int N) {
	int i = 1;

	while (i <= N) {
		i *= 2;
		int temp = i * 2;
		if (temp > N && i <= N)
			return i;
	}

	/*
	int val = 1;
	while(2 * val <= N)
		val *=2;
	return val;
	*/
}
//�ð����⵵ O(logN)


//���� ����: Integer Overflow: �ش� ������ �ڷ����� ǥ���� �� �ִ� ������ ������ ���

/*
�Ǽ� �ڷ��� Ư¡

1. �Ǽ��� ����/���� �������� �ݵ�� ������ �ݵ�� �߻��Ѵ�!!
-->float : ��ȿ���� 6�ڸ�
-->double: ��ȿ���� 15�ڸ�(���� ������ ���� ��ȿ���� ������ �б� ������ float���ٴ� double ���!!)

2. double�� long long ���� ������ �Ժη� ������ �� �ȴ�(���� ���� ���� ����)
- int�� double�� ��Ƶ� ���� X

3. �Ǽ��� ���� ���� ��ȣ ��� X!!

*/
int main() {
	
	printf("%d", func4(97615282));
	
}

//https://blog.encrypted.gg/922
//1강 시간복잡도, 정수자료형, 실수자료형
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
//시간 복잡도 = 1(cnt = 0) + 1(i = 0) + n(2 + 2 + 1) + 1(return) = 5n + 3

//문제1
int func1(int N) {

	int total = 0;

	for (int i = 0; i < N; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}

	return total;
}
// 시간 복잡도 O(N) - N번 비교

//문제2
int func2(int arr[], int N) {

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100)
				return 1;
		}
	}

	return 0;
}
//시간 복잡도 O(N^2)  -->  비교 횟수 (N-1) + (N - 2) + (N - 3) + ... + 2 + 1 = (N^2 - N)/2 = N^2 

//문제3
int func3(int N) {
	for (int i = 1; i * i <= N; i++) {
		if (i * i == N)
			return 1;
	}

	return 0;
}
//시간복잡도 : O(루트N)

//문제4
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
//시간복잡도 O(logN)


//오류 유형: Integer Overflow: 해당 변수의 자료형이 표현할 수 있는 정수의 범위를 벗어남

/*
실수 자료형 특징

1. 실수의 저장/연산 과정에서 반드시 오차가 반드시 발생한다!!
-->float : 유효숫자 6자리
-->double: 유효숫자 15자리(보다 오차가 없는 유효숫자 범위가 넓기 때문에 float보다는 double 사용!!)

2. double에 long long 범위 정수를 함부로 담으면 안 된다(오차 섞일 수도 있음)
- int는 double에 담아도 오차 X

3. 실수를 비교할 때는 등호 사용 X!!

*/
int main() {
	
	printf("%d", func4(97615282));
	
}

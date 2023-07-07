/*
08. 직원들의 월급이 배열A[]에 저장되어 있다가정하자. 이번달에 회사에서 지급할 월급의 총액을 계산하고자 한다.
정수형 배열 요소들의 합을 구하여 반환하는 함수를 작성하고 테스트하라.
*/

#include <stdio.h>

int array_sum(int* A, int size);

int main(void) {
	int A[10] = { 1,2,3 };
	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("월급의 합 = %d",array_sum(A, 10));
	return 0;
}

int array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}
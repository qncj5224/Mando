/*
07. 직원들의 기본급이 배열 A[]에 저장되어 있다. 배열 B[]에는 직원들의 보너스가 저장되어 있다.
기본급과 보너스를 합하여 이번달에 지급할 월급의 총액을 계산하고자 한다.
A[]와 B[]를 더하여 배열 C[]에 저장하는 함수를 작성하고 테스트하라.
즉 모든 i에 대하여 C[i] = A[i] + B[i]가 된다.
*/

#include <stdio.h>

void array_add(int* A, int* B, int* C, int size);

int main(void) {
	int size = 10;
	int A[10] = { 1,2,3};
	int B[10] = { 0 }, C[10] = { 0 };
	array_add(A, B, C, 10);
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", C[i]);
	}
}

void array_add(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}
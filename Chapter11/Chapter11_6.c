/*
06. 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트하라.
*/

#include <stdio.h>
void array_copy(int* A, int* B, int size);

int main(void) {
	int size = 10;
	int A[] = { 1,2,3,0,0,0,0,0,0,0 };
	int B[10];
	array_copy(A, B, 10);
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
	return 0;
}

void array_copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		for (i = 0; i < size; i++) {
			B[i] = A[i];
		}
	}
}
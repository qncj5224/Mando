/*
06. ���� �迭 A[]�� �ٸ� ���� �迭 B[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
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
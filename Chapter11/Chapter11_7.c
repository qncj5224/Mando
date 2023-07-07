/*
07. �������� �⺻���� �迭 A[]�� ����Ǿ� �ִ�. �迭 B[]���� �������� ���ʽ��� ����Ǿ� �ִ�.
�⺻�ް� ���ʽ��� ���Ͽ� �̹��޿� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�.
A[]�� B[]�� ���Ͽ� �迭 C[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
�� ��� i�� ���Ͽ� C[i] = A[i] + B[i]�� �ȴ�.
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
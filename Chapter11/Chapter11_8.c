/*
08. �������� ������ �迭A[]�� ����Ǿ� �ִٰ�������. �̹��޿� ȸ�翡�� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�.
������ �迭 ��ҵ��� ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
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
	printf("������ �� = %d",array_sum(A, 10));
	return 0;
}

int array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}
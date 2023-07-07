/*
04. ���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
��� ������ A[] = {1,2,3,4,5}�� ���� ������ �ǵ��� �϶�.
*/

#include <stdio.h>

void array_print(int* A, int size);

int main(void) {
	int A[5] = { 1,2,3,4,5 };
	array_print(&A,5);
	return 0;
}

void array_print(int* A, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}
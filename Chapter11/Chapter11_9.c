/*
09. �������� ������ ����� �迭���� ������ 200�� ���� ����� ã�� ���� ���� �ִ�. �־��� ���� �迭 A[]���� Ž���Ͽ� �迭 ����� �ε����� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
*/

#include<stdio.h>

int search(int* A, int size, int search_value);

int main(void)
{
	int data[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int index = search(data, 10, 200);
	printf("������ 200������ ����� �ε���=%d\n", index);
	return 0;
}

int search(int* A, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}
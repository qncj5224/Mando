/*
08 �־��� ������ �� ���� �ڸ����� ������ �ִ����� ����ϴ� ���α׷��� ��ȯ�� �̿��Ͽ� �ۼ��غ���.
���� �� 12345�� ��쿡�� 5�� ��µȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;

int length(int x) {
	if (x <= 0) return 0;
	else return (1 + length(x / 10));
}

int main(void) {
	int x;
	printf("������ �ԏ��Ͻÿ�.: ");
	scanf("%d", &x);
	printf("�ڸ����� ����: %d", length(x));
	return 0;
}
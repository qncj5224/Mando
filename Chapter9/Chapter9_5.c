/*
05 1���� n������ �� (1+2+3+....+n)�� ����ϴ� ������ ��ȯ����� �̿��Ͽ� �ۼ��غ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	if (n <= 1)
		return 1;
	else 
		return n + sum(n - 1);
}

int main(void) {
	int n;
	printf("������ �Է��Ͻÿ�.: ");
	scanf_s("%d", &n);
	sum(n);
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum(n));
	return 0;
}
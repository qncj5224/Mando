/*
11 1^2 + 2^2 + 3^2 + ... + n^2�� ���� ����Ͽ� ����Ͽ� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, result=0;

	printf("n�� ���� �Է��Ͻÿ�.: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		result += i * i;
	}
	printf("��갪�� %d�Դϴ�.", result);
	return 0;
}
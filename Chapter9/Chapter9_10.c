/*
10 ������ ���� ������ ���� ����ϴ� ��ȯ���� ���α׷��� �ۼ��϶�.
1/1 + 1/2 + 1/3 + .... + 1/n -> �̶� n�� 10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int n) {
	if (n <= 1) return 1;
	else return 1.0 / n + recursive(n - 1);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%lf", recursive(n));
	return 0;
}
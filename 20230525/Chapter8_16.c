/*
16 ���Ϸ��� �� e�� �ڿ� �ε��� �ؼ��� ���ȴ�.
�� ���� ������ ���� �Ŀ� ���Ͽ� �ٻ�ġ�� ���� �� �ִ�.
������ �ִ� ���丮�� ���� ����ϴ� factorial()�� ȣ���Ͽ� ���Ϸ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long factorial(n) {
	long long result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main(void) {
	int n;
	double k = 1.0, j;
	printf("������ ����ұ��.: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		j = 1.0 / factorial(i);
		k += j;
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.\n", k);
	return 0;
}
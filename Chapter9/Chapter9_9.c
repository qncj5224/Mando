/*
09 ���� ������ ������ �����̴�. �ڸ����� �հ踦 ����ϴ� ���α׷��� ��ȯ�� �̿��Ͽ� �ۼ��غ���.
���� �� 123�� ��쿡�� 6�� ��µȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_digit_sum(int n)
{
	if (n == 0)
		return 0;

	return ((n % 10) + get_digit_sum(n / 10));
}

int main()
{
	int n, sum;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	sum = get_digit_sum(n);

	printf("�ڸ����� ��: %d\n", sum);

	return 0;
}
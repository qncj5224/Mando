/*
01 ����, ����, ����, �������� �����ϴ� ���� ���α׷��� �ۼ��Ͽ� ����.
�̹����� �� ������� �� ���� ���Ǿ������� �������
�� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ����Ѵ�.
(2) ���� ������ ����Ͽ� ���α׷��� �ۼ��϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char op;
int x, y, i, count_add = 0, count_sub = 0, count_mul = 0, count_div = 0;

int add(int x, int y)
{
	count_add++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_add);
	return (x + y);
}

int sub(int x, int y)
{
	count_sub++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_sub);
	return (x - y);
}
int mul(int x, int y)
{
	count_mul++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_mul);
	return (x * y);
}
int div(int x, int y)
{
	count_div++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count_div);
	return (x / y);
}

int main(void)
{
	for (i = 0; i < 10; i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &op, &y);
		if (op == '+')
			printf("���� ���: %d \n", add(x, y));
		else if (op == '-')
			printf("���� ���: %d \n", sub(x, y));
		else if (op == '*')
			printf("���� ���: %d \n", mul(x, y));
		else if (op == '/')
			printf("���� ���: %d \n", div(x, y));
		else
			printf("�������� �ʴ� �������Դϴ�. \n");
	}
	return 0;
}
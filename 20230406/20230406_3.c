#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, result;
	char op;

	printf("���� 2���� ������ �Է��Ͻÿ�. (��: 5+2):  ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("�ùٸ� ������ �ƴմϴ�.");

	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}
/*
12 �Ǻ���ġ ���������� ���� 2���� ���Ҹ� ���Ͽ� ���� ���Ҹ� �����.
�Ǻ���ġ ������ ��ǻ�Ϳ����� Ž�� ����� ���Ǳ⵵ �Ѵ�.
�Ǻ���ġ ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, a = 0, b = 1, c=0;

	printf("�� ��° �ױ��� ���ұ��? ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
/*
14 ����ڰ� �Է��� Ư���� �������ڸ����� �ݴ�� ����ϴ� ���α׷��� �ۼ��϶�.
���� �� ����ڰ� ���� 1206�� �Է��Ͽ��ٸ� 6021�� ��µǾ���Ѵ�. do...while���� ����Ͽ� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, div;

	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &num);

	do {
		div = num % 10;
		num /= 10;
		printf("%d", div);
	} while (num != 0);
		return 0;
}
/*
05 ��ø �ݺ����� ����Ͽ��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i, j;

	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
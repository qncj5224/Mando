/*
04 �ݺ� ������ ����Ͽ� ������ ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.
*/

#include <stdio.h>

int main(void) {
	int j;
	for (int i = 1; i < 8; i++) {
		for (j = 7-i; j > 0; j--) {
			printf(" ");
		}
		for (j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*
08 ��ǻ�ʹ� ���� �׷����� �׸��� ���� ���ȴ�. ����ڷκ��� 1���� 50������ ���ڸ� �Է¹޾Ƽ� ���ڸ�ŭ�� ��ǥ�� ����ϴ� ���α׷��� �ۼ��϶�.
����� ���η� �׷����� �ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int height;

	while (1) {
		printf("������ ����(����: -1): ");
		scanf("%d", &height);

		for (int i = 1; i <= height; i++) {
			printf("*");
		}
		printf("\n");
		if (height == -1)
			break;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z;
	printf("���� �� ���� �Է��Ͻÿ�.: ");
	scanf("%d %d", &x, &y);
	int i = 1;
	for (i = 1; i < x + 1; i++) {
		if ((x % i == 0) && (y % i == 0)) {
			z = i;
		}
	}
	printf("%d", z);
	return 0;
}
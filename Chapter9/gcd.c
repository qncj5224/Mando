// �ִ� ����� ���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void) {
	int x, y;
	printf("���� 2���� �Է��Ͻÿ�.: ");
	scanf("%d %d", &x, &y);
	printf("�ִ������� %d�Դϴ�.", gcd(x, y));
	return 0;
}

/*
int main(void) {
	printf("%d\n", gcd(30, 20));
}
*/
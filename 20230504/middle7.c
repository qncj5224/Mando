/*
7. ����ڷκ��� 3���� ������ �о� ���� �Ŀ� if-else���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, min; // �Է� ���� ������ ������ ���� x, y, z,�� �ּҰ����� �� ���� min ����

	printf("���� 3���� �Է��Ͻÿ�."); 
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else
		min = x;
	if (z < min)
		min = z;

	printf("���� ���� ���� %d�Դϴ�.", min);
	return 0;
}
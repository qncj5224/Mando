/*
03 ����ڷκ��� 3���� ������ �о� �����Ŀ� if-else ���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, min;

	printf("3���� ������ �Է��Ͻÿ�.: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y) {
		min = y;
	}
	else if(x<y){
		min = x;
	}
	if (min < z) {
		printf("���� ���� ������ %d�Դϴ�.", min);
	}
	else if (min > z) {
		min = z;
		printf("���� ���� ������ %d�Դϴ�.", min);
	}
	return 0;
}
/*
10 (x,y) ��ǥ�� �Է¹޾Ƽ� ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x, y;

	printf("��ǥ(x y): ");
	scanf("%d %d", &x, &y);		//����ڷκ��� ��ǥ�� �Է¹ް�
	if (x > 0 && y > 0) {		//x>0 �Ӱ� ���ÿ� y>0 �̶�� 1��и�
		printf("1��и�\n");
	}
	if (x < 0 && y > 0) {		//x<0�Ӱ� ���ÿ� y>0 �̶�� 2��и� 
		printf("2��и�\n");
	}
	if (x < 0 && y < 0) {		//x<0�Ӱ� ���ÿ� y<0�̶�� 3��и�
		printf("3��и�\n");
	}
	if (x > 0 && y < 0) {		//x<0�Ӱ� ���ÿ� y<0�̶�� 4��и�
		printf("4��и�\n");
	}
	return 0;
}
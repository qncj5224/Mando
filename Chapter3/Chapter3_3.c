/*
03 ����ڷκ��� �ﰢ���� ���̿� �غ��� �޾ƿͼ� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
�� ��� �����ʹ� �Ǽ��� �ԷµǸ� ��µ� ��� �Ǽ������� �Ͽ��� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARRING
#include <stdio.h>

int main(void) {
	
	int width, height;
	float area;

	printf("�ﰢ���� �غ�: ");
	scanf("%d", &width);

	printf("�ﰢ���� ����: ");
	scanf("%d", &height);

	area = width * height * 0.5;

	printf("�ﰢ���� ����: %f", area);

	return 0;
}
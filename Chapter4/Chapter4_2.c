/*
02 ����ڷκ��� ������ 16������ �Է¹޾Ƽ� 8����, 10����, 16���� ���·� ����ϴ� ���α׷��� �ۼ��϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int data;

	printf("16���� ������ �Է��Ͻÿ�.: ");
	scanf("%x", &data);

	printf("8�����δ� %#o�Դϴ�.\n",data);
	printf("10�����δ� %d�Դϴ�.\n",data);
	printf("16�����δ� %#x�Դϴ�.",data);
	return 0;
}
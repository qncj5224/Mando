/*
01 ����ڷκ��� �� ���� �Ǽ��� �Է¹��� ��, �հ�� ��հ��� ����Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	float sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�.: ");
	scanf("%d", &num1);

	printf("�Ǽ��� �Է��Ͻÿ�.: ");
	scanf("%d", &num2);

	printf("�Ǽ��� �Է��Ͻÿ�.: ");
	scanf("%d", &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("���� %f �̰� ����� %f �Դϴ�.", sum, avg);
	return 0;
}
/*
02 ����ڷκ��� 2���� ������ �޾Ƽ� ù ��° ������ �� ��° ������ ������ �������� ���� �˻��ϴ� ���α׷��� �ۼ��϶�. �� ��������� �˻��Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &num1);

	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0) {
		printf("����Դϴ�.");
	}
	else {
		printf("����� �ƴմϴ�.");
	}
	return 0;
}
/*
05 ���׽� 3x2 + 7x + 11�� ���� ����ϴ� ���α׷��� �ۼ��϶�. x�� ���� �Ǽ��� ����ڿ��� �Է¹޴´�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	float num, result;

	printf("�Ǽ��� �Է��ϼ���.: ");
	scanf("%f", &num);

	result = 3 * num * num + 7 * num + 11;

	printf("���׽��� ���� %f", result);

	return 0;
}
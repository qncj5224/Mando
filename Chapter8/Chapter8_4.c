/*
04 �츮�� �տ��� ������ ���ϴ� �˰����� �н��Ͽ���.
�̰��� �Լ�is_leap(int year) �Լ��� �ۼ��ϰ� �� �Լ��� ����Ͽ��� ����ڰ� �Է��� ������ ���������� ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d���� 366�� �Դϴ�.\n", year);
	else
		printf("%d���� 365�� �Դϴ�.\n", year);
}

int main(void) {
	int year;
	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &year);
	is_leap(yaer);
	return 0;
}
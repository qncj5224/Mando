/*
01 �־��� �Ǽ��� �����Ͽ� ��ȯ�ϴ� �Լ� double square(double)�� �ۼ��Ѵ�.
square() �Լ��� �׽�Ʈ�ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x) {
	double p = x * x;
	return(p);
}

int main(void) {
	double x, result;
	printf("������ �Է��Ͻÿ�.: ");
	scanf("%lf", &x);
	result = square(x);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", x, result);
	return 0;
}
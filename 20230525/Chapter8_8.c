/*
08 sin() ���̺귯�� �Լ��� ȣ���Ͽ��� 0������ 180������ 10�� ������ ���� �Լ� ���� ����Ͽ� ����.
�߰������� �ƿ� ������ �޾Ƽ� ���ΰ��� ��ȯ�ϴ� sin_degree(double degree)�� �ۼ��Ͽ� ������ �ذ��� �� �ִ°�?
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double sin_degree(double degree) {
	double radian = (3.141592 * degree) / 180.0;
	return sin(radian);
}

int main(void) {
	double degree;
	printf("������ �Է��Ͻÿ�.: ");
	scanf("%lf", &degree);
	double result = sin_degree(degree);
	printf("sin(%lf)�� ���� %lf", degree, result);
	return 0;
}
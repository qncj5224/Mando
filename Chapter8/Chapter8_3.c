/*
03 ���� ������ ���ϴ� ������ �Լ��� �ۼ��Ͽ� ����.
������ ���� ���� �̿��϶�.
���� ������ ���ϴ� �Լ� cal_area(double radius)�� �ۼ��ϰ� �Լ��� ȣ���Ͽ� ���� ������ ����ϴ� ��ü ���α׷��� �ϼ��϶�.
���� = ������ * ������ * ������
*/
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>

double cal_area(double radius) {
	double cal_area = 3.141592 * radius * radius;
	return (cal_area);
}

int main(void) {
	double radius, result;
	printf("���� �������� �Է��Ͻÿ�.: ");
	scanf("%lf", &radius);
	result = cal_area(radius);
	printf("���� ������ %lf�Դϴ�.", result);
	return 0;
}
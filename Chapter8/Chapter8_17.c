/*
17 �ΰ��� �ε� �Ҽ��� ���� �ٻ������� ���� ���̸� 1�� ��ȯ�ϰ� �ٻ������� ���� ������ 0�� �Ѱ��ִ� �Լ� f_equal(a,b)�� �ۼ��Ͻÿ�.
�ٻ������� ���ٰ� �ϴ� ���� ������ �ε���� �����ϴ� ����� �����Ѵ�.
absolute(a-b) / min(absolute (a) , absolute (b)) < e 
�ε� �Ҽ��� ���� ���밪�� ���ϴ� �Լ��� �μ� �߿��� �ּҰ��� ã�� �Լ��� ������ �����Ͽ� ����϶�.
e�� ����μ� 0.0000001�� ���ǵȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double f_abs(double x) {
	if (x > 0)
		return x;
	else
		return -x;
}

double f_min(double x, double y) {
	if (x < y)
		return x;
	else
		return y;
}

int f_equal(double x, double y) {
	if (f_abs(x - y) / f_min(f_abs(x), f_abs(y)) < 0.000001)
		return 1;
	else
		return 0;
}

int main(void) {
	double x, y;
	printf("�Ǽ��� �Է��Ͻÿ�.: ");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ�.: ");
	scanf("%lf", &y);
	if (f_equal(x, y) == 1)
		printf("�� ���� �Ǽ��� ���� ����");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�");
	return 0;
}
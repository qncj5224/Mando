/*
05 �츮���󿡼� ���� ���Ǵ� ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� 1���� 3.3m2�̴�. �������� �ڷ����� � ���� �����ϴ� ���� ������?
��ȣ ����� �̿��Ͽ� 1��� �������͸� ��Ÿ�����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	const double SQMETER_PER_PYEONG = 3.3058;
	int pyeong;
	double square_meter;

	printf("���� �Է��ϼ���.: ");
	scanf("%d", &pyeong);

	square_meter = pyeong * SQMETER_PER_PYEONG;

	printf("%lf �������Դϴ�.", square_meter);
	return 0;
}
/*
02 �̱������� �Ÿ��� ǥ���ϴµ� ������ ����Ѵ�. ������ ���ͷ� ȯ���ϴ� ���α׷��� ������.
����ڷκ��� ���ϴ����� �Ÿ��� �Է� �޾Ƽ� ������ �����Ѵ�. ��  ������ 1.609�� ���Ͽ� ���ͷ� ��ȯ�Ѵ�.
���ͷ� ��ȯ�� ���� ȭ�鿡 ����Ѵ�. �Ǽ� ���� ����Ѵ�.
*/
#define _CRT_SECURE_NO_WARRING
#include <stdio.h>

int main(void) {
	float meter;
	double mile;

	printf("������ �Է��Ͻÿ�.: ");
	scanf_s("%lf", &mile);

	meter = mile*1609.0;

	printf("%.1f������ %lf���� �Դϴ�.", mile, meter);
	return 0;
}
/*
06 ���� �߷��� ������ �� 17%��� �Ѵ�. �ڽ��� �����Ը� �Է¹޾Ƽ� �޿����� �����Ը� ����ϴ� ���α׷��� �ۼ��Ͽ�����. �Ǽ������� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int weight_on_earth;
	float weight_on_moon;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%d", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %f kg �Դϴ�.",weight_on_moon);

	return 0;
}
/*
04 ������ ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͽ� ����.
���Ǵ� ����*�ʺ�*���̷� ���ȴ�. ����, �ʺ�, ���̴� ��� double���� �Ǽ��� �Է¹޾� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double length, width, height, volume;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &length, &width, &height);

	volume = length * width * height;

	printf("������ ���Ǵ� %lf �Դϴ�", volume);
	return 0;
}
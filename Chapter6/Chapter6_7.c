/*
07 ����ڷκ��� Ű�� �Է¹޾Ƽ� ǥ�� ü���� ����� �Ŀ� ������� ü�߰� ���Ͽ� ��ü������, ǥ������, ��ü�������� �Ǵ��ϴ� ���α׷��� �ۼ��Ͽ���.
ǥ�� ü�� ������ ������ ����϶�. ǥ�� ü�� = (Ű - 100) x 0.9
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double height, weight, std_weight;

	printf("ü�߰� Ű�� �Է��ϼ���:");
	scanf("%lf %lf", &weight, &height);
	std_weight = (height - 100) * 0.9;
	if (weight < std_weight)
		printf("��ü���Դϴ�.\n");
	else if (weight > std_weight)
		printf("��ü���Դϴ�.\n");
	else
		printf("ǥ��ü���Դϴ�.\n");
	return 0;
}
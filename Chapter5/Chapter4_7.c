/*
07 �����п��� ��������� E = mv2/2.0���� ���ȴ�. ����ڷκ��� ����(m)�� �ӵ�(v)�� �޾Ƽ� �������(E)�� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
��� ������ double���� ����϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass, velocity, Energy;

	printf("����(kg): ");
	scanf("%lf", &mass);

	printf("�ӵ�(m/s): ");
	scanf("%lf", &velocity);

	Energy = (mass * velocity * velocity) / 2.0;

	printf("�������(J): %lf", Energy);
	return 0;
}
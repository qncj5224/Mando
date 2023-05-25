/*
06 ��ȯ����� �̿��Ͽ� �������� ����ϴ� �Լ� power(int base, int power_raised)�� �ۼ��ϰ� �׽�Ʈ�غ���.
power(2,3)�� ȣ��Ǹ� 2^3�� ����Ͽ� ��ȯ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised) {
	if (power_raised <= 0) return 1;
	else return base * power(base, power_raised - 1);
}

int main(void) {
	int base, power_raised;
	printf("��: ");
	scanf("%d", &base);
	printf("����: ");
	scanf("%d", &power_raised);
	printf("%d^%d = %d", base, power_raised, power(base, power_raised));
	return 0;
}
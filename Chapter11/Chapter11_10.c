/*
10. 2���� ������ �Է¹޾Ƽ� �ִ� ������� �ּ� ������� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
�ִ� ������� ��Ŭ������ ����� ����Ͽ��� ����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);
int get_gcd(int x, int y);

int main(void) {
	int num1, num2;
	int p_lcm, p_gcd;
	printf("�ΰ��� ������ �Է��Ͻÿ�.: ");
	scanf("%d %d", &num1, &num2);
	get_lcm_gcd(num1, num2,&p_lcm ,&p_gcd);
	printf("�ּҰ������ %d�Դϴ�.\n", p_gcd);
	printf("�ִ������� %d�Դϴ�.", p_lcm);
	return 0;
}

int get_gcd(int x, int y) {

	while (y != 0) {
		int a = x % y;
		x = y;
		y = a;
	}
	return x;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	*p_gcd = get_gcd(x, y);
	*p_lcm = (x * y) / *p_gcd;
}

/*
10. 2개의 정수를 입력받아서 최대 공약수와 최소 공배수를 반환하는 함수를 작성하고 테스트하라.
최대 공약수는 유클리드의 방법을 사용하여서 계산한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);
int get_gcd(int x, int y);

int main(void) {
	int num1, num2;
	int p_lcm, p_gcd;
	printf("두개의 정수를 입력하시오.: ");
	scanf("%d %d", &num1, &num2);
	get_lcm_gcd(num1, num2,&p_lcm ,&p_gcd);
	printf("최소공배수는 %d입니다.\n", p_gcd);
	printf("최대공약수는 %d입니다.", p_lcm);
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

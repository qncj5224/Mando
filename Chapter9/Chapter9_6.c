/*
06 순환기법을 이용하여 지수값을 계산하는 함수 power(int base, int power_raised)를 작성하고 테스트해보자.
power(2,3)가 호출되면 2^3을 계산하여 번환하자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised) {
	if (power_raised <= 0) return 1;
	else return base * power(base, power_raised - 1);
}

int main(void) {
	int base, power_raised;
	printf("밑: ");
	scanf("%d", &base);
	printf("지수: ");
	scanf("%d", &power_raised);
	printf("%d^%d = %d", base, power_raised, power(base, power_raised));
	return 0;
}
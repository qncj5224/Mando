/*
10 다음과 같은 수식의 값을 계산하는 순환적인 프로그램을 작성하라.
1/1 + 1/2 + 1/3 + .... + 1/n -> 이때 n은 10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int n) {
	if (n <= 1) return 1;
	else return 1.0 / n + recursive(n - 1);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%lf", recursive(n));
	return 0;
}
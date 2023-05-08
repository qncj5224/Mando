/*
01 주어진 실수를 제곱하여 반환하는 함수 double square(double)을 작성한다.
square() 함수를 테스트하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x) {
	double p = x * x;
	return(p);
}

int main(void) {
	double x, result;
	printf("정수를 입력하시오.: ");
	scanf("%lf", &x);
	result = square(x);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.", x, result);
	return 0;
}
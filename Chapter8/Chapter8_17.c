/*
17 두개의 부동 소수점 수가 근사적으로 같은 값이면 1를 반환하고 근사적으로 같지 않으면 0를 넘겨주는 함수 f_equal(a,b)을 작성하시오.
근사적으로 같다고 하는 것은 다음의 부등식을 만족하는 경우라고 가정한다.
absolute(a-b) / min(absolute (a) , absolute (b)) < e 
부동 소수점 수의 절대값을 구하는 함수와 두수 중에서 최소값을 찾는 함수는 스스로 제작하여 사용하라.
e는 상수로서 0.0000001로 정의된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double f_abs(double x) {
	if (x > 0)
		return x;
	else
		return -x;
}

double f_min(double x, double y) {
	if (x < y)
		return x;
	else
		return y;
}

int f_equal(double x, double y) {
	if (f_abs(x - y) / f_min(f_abs(x), f_abs(y)) < 0.000001)
		return 1;
	else
		return 0;
}

int main(void) {
	double x, y;
	printf("실수를 입력하시오.: ");
	scanf("%lf", &x);
	printf("실수를 입력하시오.: ");
	scanf("%lf", &y);
	if (f_equal(x, y) == 1)
		printf("두 개의 실수는 서로 같음");
	else
		printf("두 개의 실수는 서로 다름");
	return 0;
}
/*
08 sin() 라이브러리 함수를 호출하여서 0도부터 180도까지 10도 단위로 사인 함수 값을 출력하여 보자.
추가적으로 아예 각도를 받아서 사인값을 반환하는 sin_degree(double degree)를 작성하여 문제를 해결할 수 있는가?
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double sin_degree(double degree) {
	double radian = (3.141592 * degree) / 180.0;
	return sin(radian);
}

int main(void) {
	double degree;
	printf("각도를 입력하시오.: ");
	scanf("%lf", &degree);
	double result = sin_degree(degree);
	printf("sin(%lf)의 값은 %lf", degree, result);
	return 0;
}
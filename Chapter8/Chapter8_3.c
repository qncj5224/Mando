/*
03 원의 면적을 구하는 문제를 함수로 작성하여 보자.
다음과 같은 식을 이용하라.
원의 면적을 구하는 함수 cal_area(double radius)를 작성하고 함수를 호출하여 원의 면적을 출력하는 전체 프로그램을 완성하라.
면족 = 원주율 * 반지름 * 반지름
*/
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>

double cal_area(double radius) {
	double cal_area = 3.141592 * radius * radius;
	return (cal_area);
}

int main(void) {
	double radius, result;
	printf("원의 반지름을 입력하시오.: ");
	scanf("%lf", &radius);
	result = cal_area(radius);
	printf("원의 면적은 %lf입니다.", result);
	return 0;
}
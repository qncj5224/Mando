/*
04 우리는 앞에서 윤년을 구하는 알고리즘을 학습하였다.
이것을 함수is_leap(int year) 함수로 작성하고 이 함수를 사용하여서 사용자가 입력한 연도가 윤년인지를 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d년은 366일 입니다.\n", year);
	else
		printf("%d년은 365일 입니다.\n", year);
}

int main(void) {
	int year;
	printf("연도를 입력하시오.: ");
	scanf("%d", &year);
	is_leap(yaer);
	return 0;
}
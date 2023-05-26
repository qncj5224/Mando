/*
08 월급에 붙는 소득세를 계산하는 함수 get_tax(int income)를 작성하고 테스트하여 보자.
과표 구간은 1000만 원 이하 8%, 1000만 원 초과는 10%로 되어 있다고 가정한다.
사용자로부터 소득을 입력받아서 세금을 계산하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_tax(int income) {
	int result;
	if (income > 1000)
		result = (int)(1000 * 0.08 + (income - 1000) * 0.1);
	else
		result = (int)(income * 0.08);
	printf("소득세는 %d입니다.", result);
	return 0;
}

int main(void) {
	int income;
	printf("소득을 입력하시오.(만원): ");
	scanf("%d", &income);
	get_tax(income);
	return 0;
}
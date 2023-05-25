/*
05 1부터 n까지의 합 (1+2+3+....+n)을 계산하는 문제를 순환기법을 이용하여 작성해보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	if (n <= 1)
		return 1;
	else 
		return n + sum(n - 1);
}

int main(void) {
	int n;
	printf("정수를 입력하시오.: ");
	scanf_s("%d", &n);
	sum(n);
	printf("1부터 %d까지의 합은 %d입니다.", n, sum(n));
	return 0;
}
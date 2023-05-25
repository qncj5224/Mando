/*
09 앞의 문제와 유사한 문제이다. 자리수의 합계를 계산하는 프로그램을 순환을 이용하여 작성해보자.
예를 들어서 123의 경우에는 6이 출력된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_digit_sum(int n)
{
	if (n == 0)
		return 0;

	return ((n % 10) + get_digit_sum(n / 10));
}

int main()
{
	int n, sum;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	sum = get_digit_sum(n);

	printf("자리수의 합: %d\n", sum);

	return 0;
}
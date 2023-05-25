/*
08 주어진 정수가 몇 개의 자리수를 가지고 있는지를 계산하는 프로그램을 순환을 이용하여 작성해보자.
예를 들어서 12345의 경우에는 5가 출력된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;

int length(int x) {
	if (x <= 0) return 0;
	else return (1 + length(x / 10));
}

int main(void) {
	int x;
	printf("정수를 입룍하시오.: ");
	scanf("%d", &x);
	printf("자리수의 개수: %d", length(x));
	return 0;
}
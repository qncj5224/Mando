/*
13 두 개의 정수 n,m을 입력받아서 n이 m의 배수이면 1을 반환하고 그렇지 않으면 0을 반환하는 함수 is_multiple(int n, int m)를 작성하고 테스트하여 보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multipe(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}

int main(void) {
	int n, m;
	printf("첫 번째 정수를 입력하시오.: ");
	scanf("%d", &n);
	printf("두 번쩨 정수를 입력하시오.: ");
	scanf("%d", &m);
	
	if (is_multipe(n, m) == 1)
		printf("%d는 %d의 배수입니다.", n, m);
	else
		printf("%d는 %d의 배수가 아닙니다.", n, m);

	return 0;
}
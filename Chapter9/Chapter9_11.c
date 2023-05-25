/*
11 이항 계수(binomial coefficient)를 계산하는 순환 함수를 작성하라. 이항 계수는 다음과 같이 순환적으로 정의된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive(int n, int k)
{
	if (n == 1 || n == k) return 1;
	else return recursive(n - 1, k - 1) + recursive(n - 1, k);
}

int main(void)
{
	printf("n=");
	int n;
	scanf("%d", &n);
	printf("k=");
	int k;
	scanf("%d", &k);
	printf("%d\n", recursive(n, k));
	return 0;
}
/*
16 오일러의 수 e는 자연 로드의 밑수로 사용된다.
이 값은 다음과 같은 식에 의하여 근사치르 구할 수 있다.
본문에 있는 팩토리얼 값을 계산하는 factorial()을 호출하여 오일러의 수를 계싼하는 프로그램을 작성하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long factorial(n) {
	long long result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main(void) {
	int n;
	double k = 1.0, j;
	printf("어디까지 계산할까요.: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		j = 1.0 / factorial(i);
		k += j;
	}
	printf("오일러의 수는 %lf입니다.\n", k);
	return 0;
}
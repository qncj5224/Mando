/*
15 주어진 정수가 소수인지를 검사하는 함수 is_prime()을 작성하라. 이 함수를 이용하여 2부터 100 사이의 모든 소수를 출력하라.
*/

#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 2; i < 100; i++) {
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}
int is_prime(int x)
{
	int i;
	for (i = 2; i < x; i++) {
		if (x % i == 0) 
			return 0;
	}
	return 1;
}
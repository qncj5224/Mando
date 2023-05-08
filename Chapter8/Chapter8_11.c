/*
11 0.0부터 1.0까지의 난수를 반환하는 함수 f_rand()룰 작성하고 5번 호출하여 본다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double f_rand() {
	return rand() / (double)RAND_MAX; // 난수 값은 0 ~ RAND_MAX(32767) 범위를 가진다.
}

int main(void) {
	for (int i = 0; i < 5; i++)
		printf("%lf ", f_rand());
	return 0;
}
/*
02. 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트하라. 포인터 매개 변수를 사용한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void) {

	int sum, diff;

	get_sum_diff(100, 200, &sum, &diff);

	printf("원소들의 합 = %d \n", sum);
	printf("원소들의 차 = %d \n", diff);
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
	return 0;
}
/*
09 난수(random number)는 컴퓨터를 이용한 문제 해결에서 많이 사용된다.
특히 수학적인 분석이 너무 복잡한 경우에 시뮬레이션을 사용하면 실제로 제품을 제작하지 않고서도 많은 실험을 할 수 있다.
rand() 힘수를 이용하여 0 또는 1 값을 무작위로 반환하는 함수 b_rand()를 작성하고 5번 호출하여보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int b_rand(void){
	return rand() % 2;
}

int main(void) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
		printf("%d ", b_rand());
	return 0;
}
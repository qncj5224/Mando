/*
11. 사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라.(5점)
(예) 정수를 입력하시오 : 20
약수 : 1, 2, 4, 5, 10, 20
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("약수 : 1"); // 출력 결과를 1, 2, 4, ... 처럼 하기 위해 1은 기본으로 설정 (1은 모든 수의 약수이기때문)

	for (int i = 2; i <= num; i++) { // 위 printf문에서 1을 넣었기 때문에 2부터 시작한다.
		if (num % i == 0)
			printf(", %d", i);
	}
	return 0;
}
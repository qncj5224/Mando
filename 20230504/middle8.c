/*
8. (x,y)좌표를 입력 받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하라.(5점)
(예) x, y좌표를 입력하시오: 10 20
1사분면입니다
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	printf("x, y좌표를 입력하시오.: ");
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0)
			printf("1사분면 입니다.");
		else
			printf("4사분면 입니다.");
	}
	else {
		if (y > 0)
			printf("2사분면 입니다.");
		else
			printf("3사분면 입니다.");
	}
	return 0;
}
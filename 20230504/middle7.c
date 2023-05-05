/*
7. 사용자로부터 3갸의 정수를 읽어 들인 후에 if-else문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, min; // 입력 받을 정수를 저장할 변수 x, y, z,와 최소값으로 쓸 변수 min 선언

	printf("정수 3개를 입력하시오."); 
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else
		min = x;
	if (z < min)
		min = z;

	printf("가장 작은 값은 %d입니다.", min);
	return 0;
}
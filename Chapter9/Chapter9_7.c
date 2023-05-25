/*
07 순환 호출을 이용하여 정수의 각 자리수를 출력하는 함수 show_digit(int x)를 작성하고 테스트하라.
즉 정수가 1234이면 화면에 1 2 3 4와 같이 출력한다. 함수는 일의 자리를 출력하고 나머지 부분을 대상으로 다시 같은 수를 순환 호출한다.
예를 들어서 1234의 4를 출력하고 나머지 123을 가지고 다시같은 함수를 순환 호출한다.
1234를 10을 나누면 123이 되고 4는 1234를 10으로 나눈 나머지이다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_digit(int x) {
	{
		if (x / 10 > 0)
			show_digit(x / 10);
		printf("%d ", x % 10);
	}
}

int main(void) {
	int x;
	printf("정수를 입력하시오.: ");
	scanf("%d", &x);
	show_digit(x);
	printf("\n");
	return 0;
}
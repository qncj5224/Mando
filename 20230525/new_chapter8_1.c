/*
01 다음과 같은 간단한 기능을 하는 함수들을 작성하고, 사용자로부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여 보자.
(a) 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int event(int n)
(b) 주어진 정수의 절대값을 구하는 함수 int absolute(int n)
(c) 주어진 정수가 음수이면 -1을, 양수이면 1을 0이면 0을 반환하는 함수 int sing(int n)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int event(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n) {
	int result = n > 0 ? n : -n;
	return result;
}

int sign(int n) {
	if (n < 0)
		return -1;
	else if (n > 0)
		return 1;
	else
		return 0;

}

int main(void) {
	int n, a, b, c;
	printf("정수를 입력하시오.: ");
	scanf("%d", &n);

	a = event(n);
	b = absolute(n);
	c = sign(n);

	if (a == 1)
		printf("event()의 결과: 짝수\n");
	else
		printf("event()의 결과 : 홀수\n");

	printf("absolute()의 결과: %d\n", b);

	if (c == -1)
		printf("sing()의 결과 : 음수");
	else if (c == 1)
		printf("sing()의 결과 : 양수");
	else if (c == 0)
		printf("sign()의 결과 : 0");

	return 0;
}
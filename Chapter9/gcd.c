// 최대 공약수 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void) {
	int x, y;
	printf("정수 2개를 입력하시오.: ");
	scanf("%d %d", &x, &y);
	printf("최대공약수는 %d입니다.", gcd(x, y));
	return 0;
}

/*
int main(void) {
	printf("%d\n", gcd(30, 20));
}
*/
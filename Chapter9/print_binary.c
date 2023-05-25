// 2진수 형식으로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_binary(int x) {
	if (x > 0) {
		print_binary(x / 2);
		printf("%d", x % 2);
	}
}

int main(void) {
	int x;
	printf("정수를 입력하시오.: ");
	scanf("%d", &x);
	print_binary(x);
	printf("\n");
	return 0;
}



/*
int main(void) {
	print_binary(9);
	printf("\n");
	return 0;
}
*/
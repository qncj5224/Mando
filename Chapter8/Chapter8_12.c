/*
12 화면에 세로로 막대 그래프를 그리는 프로그램을 작성하여 보자. 인수의 값만큼의 별표 문자를 출력하는 함수 print_value(int n)을 작성하라.
반복적으로 사용자로부터 값을 입력받아서 print_vlaue()를 호출하여 입력값만큼 막대를 그리는 프로그램을 완성하라.
사용자가 음수를 입력하면 반복을 중단하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n) {
	for (int i = 0; i < n; i++)
		printf("*");
	printf("\n");
}

int main(void) {
	int n;
	while (1) {
		printf("값을 입력하시오.(종료는 음수): ");
		scanf("%d", &n);
		if (n < 0)
			break;
		print_value(n);
	}
	return 0;
}
/*
18 사용자로부터 2개의 숫자를 받아서 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 연산의 결과를 계산해주는 프로그램을 작성해보자.
다음과 같은 메뉴를 표시한다. 프로그램 작성시에 최대한 함수를 많이 사용해보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("==============================\n");
	printf("MENU\n");
	printf("==============================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
}

 Add(int x, int y) {
	return x + y;
}

int Sub(int x, int y) {
	return x - y;
}

int Mul(int x, int y) {
	return x * y;
}

double Div(int x, int y) {
	return x / y;
}

double Quo(int x, int y) {
	return x % y;
}

int main(void) {
	int num, x, y;
	char user;
	while (1) {
		menu();
		printf("원하는 메뉴를 선택하시오.(1-5): ");
		scanf("%d", &num);
		printf("숫자 2개를 입력하시오.: ");
		scanf("%d %d", &x, &y);
		switch (num)
		{
		case 1:
			printf("연산결과: %d", Add(x, y));
			break;
		case 2:
			printf("연산결과: %d", Sub(x, y));
			break;
		case 3:
			printf("연산결과: %d", Mul(x, y));
			break;
		case 4:
			printf("연산결과: %lf", Div(x, y));
			break;
		case 5:
			printf("연산결과: %lf", Quo(x, y));
			break;
		}
		printf("\n계속하려면 y를 누르시오.: ");
		scanf("\n%c", &user);
		if (user == 'y')
			continue;
		else
			break;
	}
	return 0;
}
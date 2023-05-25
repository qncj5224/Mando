/*
01 덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성하여 보자.
이번에는 각 연산들이 몇 번씩 계산되었는지를 기억하자
각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.
(2) 전역 변수를 사용하여 프로그램을 작성하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char op;
int x, y, i, count_add = 0, count_sub = 0, count_mul = 0, count_div = 0;

int add(int x, int y)
{
	count_add++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count_add);
	return (x + y);
}

int sub(int x, int y)
{
	count_sub++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count_sub);
	return (x - y);
}
int mul(int x, int y)
{
	count_mul++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count_mul);
	return (x * y);
}
int div(int x, int y)
{
	count_div++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count_div);
	return (x / y);
}

int main(void)
{
	for (i = 0; i < 10; i++)
	{
		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &x, &op, &y);
		if (op == '+')
			printf("연산 결과: %d \n", add(x, y));
		else if (op == '-')
			printf("연산 결과: %d \n", sub(x, y));
		else if (op == '*')
			printf("연산 결과: %d \n", mul(x, y));
		else if (op == '/')
			printf("연산 결과: %d \n", div(x, y));
		else
			printf("지원되지 않는 연산자입니다. \n");
	}
	return 0;
}
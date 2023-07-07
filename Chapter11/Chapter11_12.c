/*
12. 우리가 프로그램을 하다보면 사용자로부터 2개의 정수를 받아오는 경우가 많다.
이것을 함수로 구현해두고 필요할때마다 사용하면 편리할 것이다. 하지만 한가지 문제가 있다.
C에서 함수는 하나의 값만 반환할 수 있다. 2개 이상의 값을 반환하려면 다른 방법을 사용해야 하는데 다음과 같이 포인터도 사용할 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void get_int(int* px, int* py) {
	int a = *px;
	int b = *py;
	printf("정수의 합은 %d", a + b);
}

int main() {
	int n1, n2;
	printf("2개의 정수를 입력하시오(예: 10 20) : ");
	scanf("%d %d", &n1, &n2);
	get_int(&n1, &n2);
}

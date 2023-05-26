/*
16 은행에 설치되어 있는 ATM 장치를 프로그램으로 구현해보자.
가능하다면 소스의 많은 부분을 함수로 구현해보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
void balance();
void deposit(int money);
void withdraw(int money);

int now_money;

int main(void) {
	int user, money;
	while (1) {
		menu();
		printf("메뉴를 입력하시오.: ");
		scanf("%d", &user);
		if (user == 4) {
			printf("종료합니다.");
			break;
		}
		switch (user)
		{
		case 1:
			balance();
			break;
		case 2:
			printf("입금 금액을 입력하시오.");
			scanf("%d", &money);
			deposit(money);
			break;
		case 3:
			printf("출금 금액을 입력하시오.");
			scanf("%d", &money);
			withdraw(money);
			break;
		}
	}
	return 0;
}

void menu() {
	printf("********************************* Welcome to Express ATM ********************************\n");
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");
}

void balance() {
	printf("잔고는 %d입니다.\n\n", now_money);
}

void deposit(int money) {
	now_money += money;
	balance();
}

void withdraw(int money) {
	if (now_money < money)
		printf("잔액이 부족합니다\n\n");
	else
		now_money -= money;
	balance();
}
/*
16 ���࿡ ��ġ�Ǿ� �ִ� ATM ��ġ�� ���α׷����� �����غ���.
�����ϴٸ� �ҽ��� ���� �κ��� �Լ��� �����غ���.
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
		printf("�޴��� �Է��Ͻÿ�.: ");
		scanf("%d", &user);
		if (user == 4) {
			printf("�����մϴ�.");
			break;
		}
		switch (user)
		{
		case 1:
			balance();
			break;
		case 2:
			printf("�Ա� �ݾ��� �Է��Ͻÿ�.");
			scanf("%d", &money);
			deposit(money);
			break;
		case 3:
			printf("��� �ݾ��� �Է��Ͻÿ�.");
			scanf("%d", &money);
			withdraw(money);
			break;
		}
	}
	return 0;
}

void menu() {
	printf("********************************* Welcome to Express ATM ********************************\n");
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");
}

void balance() {
	printf("�ܰ�� %d�Դϴ�.\n\n", now_money);
}

void deposit(int money) {
	now_money += money;
	balance();
}

void withdraw(int money) {
	if (now_money < money)
		printf("�ܾ��� �����մϴ�\n\n");
	else
		now_money -= money;
	balance();
}
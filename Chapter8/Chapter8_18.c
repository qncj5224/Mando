/*
18 ����ڷκ��� 2���� ���ڸ� �޾Ƽ� ����, ����, ����, ������, ������ ������ ����� ������ִ� ���α׷��� �ۼ��غ���.
������ ���� �޴��� ǥ���Ѵ�. ���α׷� �ۼ��ÿ� �ִ��� �Լ��� ���� ����غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("==============================\n");
	printf("MENU\n");
	printf("==============================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
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
		printf("���ϴ� �޴��� �����Ͻÿ�.(1-5): ");
		scanf("%d", &num);
		printf("���� 2���� �Է��Ͻÿ�.: ");
		scanf("%d %d", &x, &y);
		switch (num)
		{
		case 1:
			printf("������: %d", Add(x, y));
			break;
		case 2:
			printf("������: %d", Sub(x, y));
			break;
		case 3:
			printf("������: %d", Mul(x, y));
			break;
		case 4:
			printf("������: %lf", Div(x, y));
			break;
		case 5:
			printf("������: %lf", Quo(x, y));
			break;
		}
		printf("\n����Ϸ��� y�� �����ÿ�.: ");
		scanf("\n%c", &user);
		if (user == 'y')
			continue;
		else
			break;
	}
	return 0;
}
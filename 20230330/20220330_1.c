// 78530�� -> 10����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, change, price, c50000, c10000, c5000, c1000, c500, c100, c50, c10;

	printf("���� ���� �Է��Ͻÿ�.: ");
	scanf("%d", &price);

	printf("������ �ݾ��� �Է��Ͻÿ�.: ");
	scanf("%d", &money);
	change = money - price;

	c50000 = change / 50000;
	change = change % 50000;

	c10000 = change / 10000;
	change = change % 10000;

	c5000 = change / 5000;
	change = change % 5000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c50 = change / 50;
	change = change % 50;

	c10 = change / 10;
	change = change % 10;

	printf("�Ž��� ����\n ��������: %d�� \n ������: %d�� \n ��õ����: %d�� \n õ����: %d�� \n ����� ����: %d�� \n ��� ����: %d�� \n ���ʿ� ����: %d�� \n �ʿ� ����: %d�� �Դϴ�.", c50000, c10000, c5000, c1000, c500, c100, c50, c10);

	pritnf("��������: %d��\n", c50000);
	pritnf("������: %d��\n", c10000);
	pritnf("��õ����: %d��\n", c5000);
	pritnf("õ����: %d��\n", c1000);
	pritnf("����� ����: %d��\n", c500);
	pritnf("��� ����: %d��\n", c100);
	pritnf("���ʿ� ����: %d��\n", c50);
	pritnf("�ʿ� ����: %d��\n", c10);
	return 0;
}
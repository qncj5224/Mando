/*
10 �տ��� �ۼ��� b_rand() �Լ��� �̿��Ͽ� ������ ���� ������ ������ �ùķ��̼��Ͽ� ����.
��ǻ�Ͱ� ������ ������ ����ڴ� �յڸ� ���Ѵ�.
��ǻ�ʹ� b_rand()�� �̿��Ͽ� ������ ������ 1�̸� ������ �ո����� �����ϰ� 0�̸� ������ �޸����� �����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int b_rand(void) {
	return rand() % 2;
}

int main(void) {
	int user;
	char ch = 'y';
	while(1) {
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf("%d", &user);

		if (user == b_rand())
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n)");
		scanf("\n%c", &ch);
		if (ch == 'n')
			break;
	}
	return 0;
}
/*
11 ����ڿ� ��ǻ�Ͱ� �ֻ��� ������ �Ѵٰ� ����. �ֻ����� �� 3���� ������ �ֻ��� ������ ���Ѵ�.
��ģ ������ ���� ���� �̱�ٰ� ����.
*/

#include <stdio.h>
#include<stdlib.h>

int rand_dice();

int main(void) {
	srand(time(NULL));
	int com1 = rand_dice(), com2 = rand_dice(), com3 = rand_dice(), user1 = rand_dice(), user2 = rand_dice(), user3 = rand_dice(), sum_com, sum_user;
	sum_com = com1 + com2 + com3;
	sum_user = user1 + user2 + user3;
	printf("����� �ֻ���=(%d, %d, %d) = %d\n", user1, user2, user3, sum_user);
	printf("��ǻ�� �ֻ���=(%d, %d, %d) = %d\n", com1, com2, com3, sum_com);
	if (sum_com > sum_user)
		printf("��ǻ�� ��");
	else if (sum_com < sum_user)
		printf("����� ��");
	else
		printf("�����ϴ�");
	return 0;
}

int rand_dice() {
	return 1 + rand() % 6;
}
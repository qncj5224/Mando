#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

int main(void) {
	char ans1;
	int ans2,ans3, i, people;
	int seats[SIZE] = { 0 };
	int a1 = 0, a2 = 0, a3=0;

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�? (y �Ǵ� n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;

		printf("---------------------------------------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20\n");
		printf("---------------------------------------------------\n");

		printf("1���Դϱ� 2���Դϱ�?");
		scanf("%d", &people);

		if (people == 1) {
			loop1:
			for (int i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");
			printf("���° �¼��� �����Ͻðڽ��ϱ�");
			scanf("%d", &ans2);
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("����Ǿ����ϴ�. \n");
			}
			else {
				printf("�̹� ����� �ڸ��Դϴ�. \n");
				goto loop1;
			}
		}

		else if (people == 2) {
			loop2:
			for (int i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");
			printf("���° �¼��� �����Ͻðڽ��ϱ� ");
			scanf("%d %d", &ans2, &ans3);

			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
				a3 = 1;
			}
			else {
				printf("%d�� �̹� ����� �ڸ��Դϴ�. \n", ans2);
				a1 = 1;
			}

			if (seats[ans3 - 1] == 0) {
				seats[ans3 - 1] = 1;
				if (a3 != 1)
				printf("����Ǿ����ϴ�.\n");
			}
			else {
				printf("%d�� �̹� ����� �ڸ��Դϴ�. \n",ans3);
				a2 = 1;
			}

			if (a1 == 1 && a2 == 1) {
				printf("�¼��� ��� �ٽ� ���ÿ�. \n");
				seats[ans2 - 1] == 1;
				seats[ans3 - 1] == 1;
				goto loop2;
			}
			else if (a1 == 1) {
				printf("ù��° �¼���  �ٽ� ���ÿ�. \n");
				people = 0;
				goto loop1;
			}
			else if (a2 == 1) {
				printf("�ι�° �¼���  �ٽ� ���ÿ�. \n");
				people = 0;
				goto loop1;
			}
		}
		}
		return 0;
	}

// �̸��̶� �й��� �������� �����ϰ� ����
// �߰� 40 �⸻ 30 ���� 30

#include <stdio.h>
#include <stdlib.h>

#define ROWS 20
#define COLS 6

struct grade
{
	int hakbun;
	char name;
	int middle;
	int final;
	int report;
	int sum;
	int rank;
};

int main(void) {
	srand((unsigned)time(NULL));
	struct grade grade[ROWS];
	int sort[ROWS];
	int num = 1;
	int j = 0, r;

	for (int i = 0; i < 26; i++)
	{
		while (j < 26)
		{
			r = rand() % 26 + 65;
			for (j = 0; j <= i; j++)
			{
				if (r == grade[j].name) break;
			}
			if (j < i) continue;
			else
			{
				grade[i].name = r;
				break;
			}
		}
	}


	for (int i = 0; i < ROWS; i++) { // ��ȣ, ����, �����ο�
		grade[i].middle = rand() % 41; // �߰�
		grade[i].final = rand() % 31; // �⸻
		grade[i].report = rand() % 31; // ����
		grade[i].sum = grade[i].middle + grade[i].final + grade[i].report; // ����
		grade[i].hakbun = 202332001 + i;
	}

	for (int i = 0; i < ROWS; i++) { // ���Ĺ迭����
		sort[i] = grade[i].sum;
	}

	int temp, least;
	for (int i = 0; i < ROWS - 1; i++) { // �������� ����
		least = i;
		for (int j = i + 1; j < ROWS; j++)
			if (sort[j] > sort[least])
				least = j;
		temp = sort[i];
		sort[i] = sort[least];
		sort[least] = temp;
	}

	int count = 0;
	int score = 1;
	for (int i = 0; i < ROWS; i++) { // ����ο�
		count++;
		for (int j = 0; j < ROWS; j++) {
			if (i != 0) { // 1���� �̱�����
				if (sort[i] != sort[i - 1])  // ���� ���� ���ٸ� grade���� ������Ű�� �ʴ´�.
					score = count;
			}
			if (grade[j].sum == sort[i])
				grade[j].rank = score;
		}
	}

	printf("�й�\t\t�̸�\t�߰�\t�⸻\t����\t����\t���\n");
	for (int i = 0; i < ROWS; i++) { // ���
		printf("%d\t%c\t%d\t%d\t%d\t%d\t%d\t ", grade[i].hakbun, grade[i].name, grade[i].middle, grade[i].final, grade[i].report, grade[i].sum, grade[i].rank);
		printf("\n");
	}
}

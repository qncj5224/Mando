/*
2���� �迭 �⸻ 50 �߰� 30 ���� 20 ������ ���� �� ��� ���ϱ�
1) ������ �������� ���ķ� NEW �迭 ����
2) �����˻��� ���� ��� �ο�
3) ������� ���� �� ��ü ���
*/

#include <stdio.h>
#include <stdlib.h>

#define ROWS 20
#define COLS 6

int main(void) {
	srand((unsigned)time(NULL));
	int score[ROWS][COLS];
	int sort[ROWS];
	int num = 1;
		
	for (int i = 0; i < ROWS; i++) { // ��ȣ, ����, �����ο�
				score[i][0] = num++; // ��ȣ
				score[i][1] = rand() % 31; // �߰�
				score[i][2] = rand() % 51; // �⸻
				score[i][3] = rand() % 21; // ����
				score[i][4] = score[i][1] + score[i][2] + score[i][3]; // ����
	}
	
	for (int i = 0; i < ROWS; i++) { // ���Ĺ迭����
		sort[i] = score[i][4];
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
	int grade = 1;
	for (int i = 0; i < ROWS; i++) { // ����ο�
		count++;
		for (int j = 0; j < ROWS; j++) {
			if (i != 0) { // 1���� �̱�����
				if (sort[i] != sort[i - 1])  // ���� ���� ���ٸ� grade���� ������Ű�� �ʴ´�.
					grade = count;
			}
				if (score[j][4] == sort[i])
					score[j][5] = grade;
		}
	}

	printf("��ȣ\t�߰�\t�⸻\t����\t����\t���\n");
	for (int i = 0; i < ROWS; i++) { // ���
		for (int j = 0; j < COLS; j++) {
			printf("%d\t ", score[i][j]);
		}
		printf("\n");
	}
}

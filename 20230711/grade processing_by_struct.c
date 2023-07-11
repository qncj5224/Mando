// 이름이랑 학번을 랜덤으로 지정하게 설정
// 중간 40 기말 30 과제 30

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


	for (int i = 0; i < ROWS; i++) { // 번호, 점수, 총점부여
		grade[i].middle = rand() % 41; // 중간
		grade[i].final = rand() % 31; // 기말
		grade[i].report = rand() % 31; // 과제
		grade[i].sum = grade[i].middle + grade[i].final + grade[i].report; // 총점
		grade[i].hakbun = 202332001 + i;
	}

	for (int i = 0; i < ROWS; i++) { // 정렬배열생성
		sort[i] = grade[i].sum;
	}

	int temp, least;
	for (int i = 0; i < ROWS - 1; i++) { // 내림차순 정렬
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
	for (int i = 0; i < ROWS; i++) { // 등수부여
		count++;
		for (int j = 0; j < ROWS; j++) {
			if (i != 0) { // 1등을 뽑기위해
				if (sort[i] != sort[i - 1])  // 만일 전과 같다면 grade값을 증가시키지 않는다.
					score = count;
			}
			if (grade[j].sum == sort[i])
				grade[j].rank = score;
		}
	}

	printf("학번\t\t이름\t중간\t기말\t과제\t총점\t등수\n");
	for (int i = 0; i < ROWS; i++) { // 출력
		printf("%d\t%c\t%d\t%d\t%d\t%d\t%d\t ", grade[i].hakbun, grade[i].name, grade[i].middle, grade[i].final, grade[i].report, grade[i].sum, grade[i].rank);
		printf("\n");
	}
}

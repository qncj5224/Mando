/*
2차원 배열 중간 50 기말 30 과제 20 총점을 구한 뒤 등수 구하기
1) 총점을 내림차순 정렬로 NEW 배열 생성
2) 순차검색을 통해 등수 부여
3) 등수까지 넣은 후 전체 출력
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
		
	for (int i = 0; i < ROWS; i++) { // 번호, 점수, 총점부여
				score[i][0] = num++; // 번호
				score[i][1] = rand() % 51; // 중간
				score[i][2] = rand() % 31; // 기말
				score[i][3] = rand() % 21; // 과제
				score[i][4] = score[i][1] + score[i][2] + score[i][3]; // 총점
	}
	
	for (int i = 0; i < ROWS; i++) { // 정렬배열생성
		sort[i] = score[i][4];
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
	int grade = 1;
	for (int i = 0; i < ROWS; i++) { // 등수부여
		count++;
		for (int j = 0; j < ROWS; j++) {
			if (i != 0) { // 1등을 뽑기위해
				if (sort[i] != sort[i - 1])  // 만일 전과 같다면 grade값을 증가시키지 않는다.
					grade = count;
			}
				if (score[j][4] == sort[i])
					score[j][5] = grade;
		}
	}

	printf("번호\t중간\t기말\t과제\t총점\t등수\n");
	for (int i = 0; i < ROWS; i++) { // 출력
		for (int j = 0; j < COLS; j++) {
			printf("%d\t ", score[i][j]);
		}
		printf("\n");
	}
}

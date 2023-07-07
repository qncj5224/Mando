#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

void print_table(int table[SIZE][SIZE]);
void convert(int table[SIZE][SIZE]);

int main(void) {
	srand((unsigned)time(NULL));

	int table[SIZE][SIZE];

	convert(table);
	print_table(table);
	return 0;
}

void print_table(int image[SIZE][SIZE]) {
	int r, c;
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%2d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}

void convert(int table[SIZE][SIZE]) {
	int r, c;
	int* p;
	int num = 0;
	int count = 0;
	while (num != 25) {
		c = rand() % SIZE;
		r = rand() % SIZE;
		p = &table[r][c];
		if (*p <0) {
			*p = num;
			num++;
		}
		count++;
	}
	printf("총 %d번 실행했습니다.\n", count);
}
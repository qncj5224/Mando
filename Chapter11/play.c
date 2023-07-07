#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

void print_image(int image[SIZE][SIZE]);
void brighten_image(int image[SIZE][SIZE]);
void convert(int image[SIZE][SIZE]);

int main(void) {
	srand((unsigned)time(NULL));
	int a = 0 , b = 0;

	int image[SIZE][SIZE];

	print_image(image);
	brighten_image(image);
	print_image(image);
	convert(image);
	print_image(image);

	return 0;
}

void print_image(int image[SIZE][SIZE]) {
	int r, c;
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%2d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}

void brighten_image(int image[SIZE][SIZE]) {
	int r, c;
	int* p;
	p = &image[0][0];
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			if (c == r || c + r == 4) {
				*p += 1;
			}
			p++;
		}
	}
}

void convert(int image[SIZE][SIZE]) {
	int r, c;
	int* p;
	for (int i = 0; i < 25; i++) {
		c = rand() % SIZE;
		r = rand() % SIZE;
		p = &image[r][c];
		if (*p == -1) {
			*p = 99;
		}
	}
}
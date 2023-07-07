#include <stdio.h>
#define SIZE 5

void print_image(int image[SIZE][SIZE]);
void brighten_image(int image[SIZE][SIZE]);

int main(void) {
	int image[SIZE][SIZE] = {
	{ -1,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,-1 }};

	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;
}

void print_image(int image[SIZE][SIZE]){
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
	int* p = &image[0][0];

	for (r = 0; r < SIZE; r++) {
		*p += 1;
		p += SIZE + 1;
	}

	p = &image[0][SIZE - 1];

	for (r = 0; r < SIZE; r++) {
		*p += 1;
		p += SIZE - 1;
	}

	p = &image[SIZE / 2][SIZE / 2];
	*p -= 1;
}
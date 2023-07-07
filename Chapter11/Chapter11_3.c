/*
03. 정수 배열을 받아서 요소들을 난수로 채우는 함수를 작성하고 테스트하라.
난수는 라이브러리 함수인 rand()를 사용하여 생성한다.
*/

#include <stdio.h>
#include <stdlib.h>

void array_fill(int* A, int size);
void array_print(int* A, int size);

int main(void)
{
	srand((unsigned)time(NULL));
	int data[10];
	array_fill(data, 10);
	array_print(data, 10);
	return 0;
}

void array_fill(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		A[i] = rand();
	}
}

void array_print(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}
/*
04. 정수 배열의 요소들을 화면에 출력하는 함수를 작성하고 테스트하라.
출력 형식은 A[] = {1,2,3,4,5}와 같은 형식이 되도록 하라.
*/

#include <stdio.h>

void array_print(int* A, int size);

int main(void) {
	int A[5] = { 1,2,3,4,5 };
	array_print(&A,5);
	return 0;
}

void array_print(int* A, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}
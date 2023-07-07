/*
09. 직원들의 월급이 저장된 배열에서 월급이 200만 원인 사람을 찾고 싶을 때가 있다. 주어진 값을 배열 A[]에서 탐색하여 배열 요소의 인덱스를 반환하는 함수를 작성하고 테스트하라.
*/

#include<stdio.h>

int search(int* A, int size, int search_value);

int main(void)
{
	int data[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int index = search(data, 10, 200);
	printf("월급이 200만원인 사람의 인덱스=%d\n", index);
	return 0;
}

int search(int* A, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}
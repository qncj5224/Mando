/*
05. 학생들의 평점은 4.3이 만점이라고 하자. 배열 grades[]에 학생 10명의 학점이 저장되어있다.
이것을 100점 만점으로 변환하여서 배열 scores[]에 저장하는 함수를 작성하고 테스트하라.
*/

#include <stdio.h>
void convert(double* grades, double* scores, int size);
void print(double* a, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%05.2f ", a[i]);
	}
	printf("\n");
}
int main(void)
{
	double grades[10] = { 0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double scores[10] = { 0 };
	print(grades, 10);
	convert(grades, scores, 10);
	print(scores, 10);
	return 0;
}
void convert(double* grades, double* scores, int size) {
	int i;
	for (i = 0; i < size; i++) {
		scores[i] = 100.0 * (grades[i] / 4.3);
	}
}
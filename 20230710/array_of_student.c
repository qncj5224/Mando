#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("학번, 이름, 학점을 입력하시오:\n");
		scanf("%d %s %lf", &s[i].number, &s[i].name, &s[i].grade);
	}

	for (int i = 0; i < SIZE; i++) {
		printf("\n학번:%d\n이름: %s\n학점: %.2lf\n", s[i].number, s[i].name, s[i].grade);
	}

	return 0;
}
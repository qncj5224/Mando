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
		printf("�й�, �̸�, ������ �Է��Ͻÿ�:\n");
		scanf("%d %s %lf", &s[i].number, &s[i].name, &s[i].grade);
	}

	for (int i = 0; i < SIZE; i++) {
		printf("\n�й�:%d\n�̸�: %s\n����: %.2lf\n", s[i].number, s[i].name, s[i].grade);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s[10];

	printf("�й�, �̸�, ������ �Է��Ͻÿ�:\n");
	scanf("%d %s %lf", &s[0].number, &s[0].name, &s[0].grade);

	printf("�й�, �̸�, ������ �Է��Ͻÿ�.");
	scanf("%d %s %lf", &s[1].number, &s[1].name, &s[1].grade);

	printf("�й�: %d\n", s[0].number);
	printf("�̸�: %s\n", s[0].name);
	printf("����: %.2lf\n\n", s[0].grade);

	printf("�й�: %d\n", s[1].number);
	printf("�̸�: %s\n", s[1].name);
	printf("����: %.2lf\n", s[1].grade);

	return 0;
}
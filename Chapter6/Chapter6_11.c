/*
11 ����ڷκ��� �ϳ��� ���ڸ� �Է¹޾Ƽ� ���ڰ� 'R'�̳� 'r'�̸� "Rectangle"�̶�� ����Ѵ�. 
'T'�̰ų� 't'�̸� "Traingle", 'C'�̰ų� 'c'�̸� "Cricle"�̶�� ����ϴ� ���α׷��� �ۼ��Ѵ�.
�� ���� ���ڰ� ������ "Unknown"�̶�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();
	switch (c) {
	case 'C':
	case 'c':
		printf("Circle \n"); break;
	case 'T':
	case 't':
		printf("Triangle \n"); break;
	case 'R':
	case 'r':
		printf("Rectangle \n"); break;
	default: printf("Unknown \n"); break;
	}

	return 0;
}
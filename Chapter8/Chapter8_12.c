/*
12 ȭ�鿡 ���η� ���� �׷����� �׸��� ���α׷��� �ۼ��Ͽ� ����. �μ��� ����ŭ�� ��ǥ ���ڸ� ����ϴ� �Լ� print_value(int n)�� �ۼ��϶�.
�ݺ������� ����ڷκ��� ���� �Է¹޾Ƽ� print_vlaue()�� ȣ���Ͽ� �Է°���ŭ ���븦 �׸��� ���α׷��� �ϼ��϶�.
����ڰ� ������ �Է��ϸ� �ݺ��� �ߴ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n) {
	for (int i = 0; i < n; i++)
		printf("*");
	printf("\n");
}

int main(void) {
	int n;
	while (1) {
		printf("���� �Է��Ͻÿ�.(����� ����): ");
		scanf("%d", &n);
		if (n < 0)
			break;
		print_value(n);
	}
	return 0;
}
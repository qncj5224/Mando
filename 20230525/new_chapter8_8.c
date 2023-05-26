/*
08 ���޿� �ٴ� �ҵ漼�� ����ϴ� �Լ� get_tax(int income)�� �ۼ��ϰ� �׽�Ʈ�Ͽ� ����.
��ǥ ������ 1000�� �� ���� 8%, 1000�� �� �ʰ��� 10%�� �Ǿ� �ִٰ� �����Ѵ�.
����ڷκ��� �ҵ��� �Է¹޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_tax(int income) {
	int result;
	if (income > 1000)
		result = (int)(1000 * 0.08 + (income - 1000) * 0.1);
	else
		result = (int)(income * 0.08);
	printf("�ҵ漼�� %d�Դϴ�.", result);
	return 0;
}

int main(void) {
	int income;
	printf("�ҵ��� �Է��Ͻÿ�.(����): ");
	scanf("%d", &income);
	get_tax(income);
	return 0;
}
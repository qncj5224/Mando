/*
13 �� ���� ���� n,m�� �Է¹޾Ƽ� n�� m�� ����̸� 1�� ��ȯ�ϰ� �׷��� ������ 0�� ��ȯ�ϴ� �Լ� is_multiple(int n, int m)�� �ۼ��ϰ� �׽�Ʈ�Ͽ� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multipe(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}

int main(void) {
	int n, m;
	printf("ù ��° ������ �Է��Ͻÿ�.: ");
	scanf("%d", &n);
	printf("�� ���� ������ �Է��Ͻÿ�.: ");
	scanf("%d", &m);
	
	if (is_multipe(n, m) == 1)
		printf("%d�� %d�� ����Դϴ�.", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", n, m);

	return 0;
}
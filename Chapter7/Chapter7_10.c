/*
10 �Ǽ��� �ŵ� �������� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
����ڷκ��� �ϳ��� �Ǽ� r�� �ŵ� ���� Ƚ���� ��Ÿ���� ���� n�� �Է¹޾Ƽ� r^n�� ���Ͽ� ȭ�鿡 ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double r, result = 1.0;
	int n;

	printf("�Ǽ��� ���� �Է��Ͻÿ�.: ");
	scanf("%lf", &r);

	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�.: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		result = result*r;
	}
	printf("%lf", result);
	return 0;
}
/*
05 �Ǽ��� �����κ�ȯ�ϸ� �Ҽ��� ���ϴ� �߷��� �������� �ȴ�. ���� �� 6.999�� ������ ��ȯ�ϸ� 6�� �ȴ�.
�Ǽ��� 0.5�� ���Ͽ� �Ҽ��� ���ϸ� ������ �ݿø� ������ �����ϴ� �Լ� round(double f)�� �ۼ��ϰ� �׽�Ʈ�϶�.
�� f�� ������ �����϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f) {
	int result = (int)(f + 0.5);
	printf("�ݿø��� ���� %d�Դϴ�." ,result);
	return 0;
}

int main(void) {
	double f;
	printf("�Ǽ��� �Է��Ͻÿ�. ");
	scanf("%lf", &f);
	round(f);
	return 0;
}
/*
11 0.0���� 1.0������ ������ ��ȯ�ϴ� �Լ� f_rand()�� �ۼ��ϰ� 5�� ȣ���Ͽ� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double f_rand() {
	return rand() / (double)RAND_MAX; // ���� ���� 0 ~ RAND_MAX(32767) ������ ������.
}

int main(void) {
	for (int i = 0; i < 5; i++)
		printf("%lf ", f_rand());
	return 0;
}
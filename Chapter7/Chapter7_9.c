/*
09 (1+2+3+...+n)�� 10000�� ���� �����鼭 ���� ū ���� �� ���� n�� ���� ���϶�.
*/

#include <stdio.h>

int main(void) {
	int sum = 0;
	for (int i = 1; ; i++) {
		sum += i;
		if (sum >= 10000) {
			printf("1���� %d������ ���� %d �Դϴ�.", i - 1, sum-i);
			break;
		}
	}
	return 0;
}
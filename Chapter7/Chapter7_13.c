/*
13 ���� �ٸ� n������ r���� �����Ͽ� �����ϴ� ����� ���� ����(permutation)�̶� �ϰ�, nPr�� ǥ���Ѵ�.
������ ������ ���� ���� �̿��Ͽ� ���� �� �ִ�. ������ ���ϴ� ���α׷��� �ۼ��϶�.
n�� r�� ����ڰ� �Է��� �� �ֵ��� �϶�. nPr = n(n-1)(n-2)...(n-r+1)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n , r  , result = 1;

	printf("n�� ��: ");
	scanf("%d", &n);

	printf("r�� ��: ");
	scanf("%d", &r);

	for (int i = 1; i <= (n - r - 1); i++) {
		result *= i;
	}
	printf("������ ���� %d�Դϴ�.", result);
	return 0;
}
/*
03 int���� ���� x��y�� ���� ���� ��ȯ�ϴ� ���α׷��� �ۼ��Ͽ� ����.
������ ������ �ʿ��ϸ� �����Ͽ��� ����Ѵ�. ����x�� y�� 10, 20�� ������ �ʱ�ȭ�϶�.
*/
#include <stdio.h>

int main(void) {

	int x=10, y=20, z;

	printf("x= %d y= %d\n", x, y);

	z = x;
	x = y;
	y = z;

	printf("x= %d y= %d\n", x, y);
	return 0;

}
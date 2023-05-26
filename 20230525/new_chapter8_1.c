/*
01 ������ ���� ������ ����� �ϴ� �Լ����� �ۼ��ϰ�, ����ڷκ��� ������ ���� �Է¹��� �Ŀ� �ۼ��� �Լ����� �׽�Ʈ�Ͽ� ����.
(a) �־��� ������ ¦���̸� 1�� ��ȯ�ϰ� Ȧ���̸� 0�� ��ȯ�ϴ� �Լ� int event(int n)
(b) �־��� ������ ���밪�� ���ϴ� �Լ� int absolute(int n)
(c) �־��� ������ �����̸� -1��, ����̸� 1�� 0�̸� 0�� ��ȯ�ϴ� �Լ� int sing(int n)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int event(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n) {
	int result = n > 0 ? n : -n;
	return result;
}

int sign(int n) {
	if (n < 0)
		return -1;
	else if (n > 0)
		return 1;
	else
		return 0;

}

int main(void) {
	int n, a, b, c;
	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &n);

	a = event(n);
	b = absolute(n);
	c = sign(n);

	if (a == 1)
		printf("event()�� ���: ¦��\n");
	else
		printf("event()�� ��� : Ȧ��\n");

	printf("absolute()�� ���: %d\n", b);

	if (c == -1)
		printf("sing()�� ��� : ����");
	else if (c == 1)
		printf("sing()�� ��� : ���");
	else if (c == 0)
		printf("sign()�� ��� : 0");

	return 0;
}
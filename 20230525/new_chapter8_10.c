/*
10. ������ ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�. Ư�� �������� �м��� �ʹ� ������ ��쿡 �ùķ��̼��� ����ϸ� ���� �������� ������ �� �� �ִ�.
10���� 90������ ������ �������� ��ȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���غ���.
*/

#include <stdio.h>
#include <stdlib.h>

int randint();

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		printf("%d \n", randint());
	return 0;
}

int randint() {
	return 10 + rand() % 81;
}
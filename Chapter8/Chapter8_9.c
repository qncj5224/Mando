/*
09 ����(random number)�� ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�.
Ư�� �������� �м��� �ʹ� ������ ��쿡 �ùķ��̼��� ����ϸ� ������ ��ǰ�� �������� �ʰ��� ���� ������ �� �� �ִ�.
rand() ������ �̿��Ͽ� 0 �Ǵ� 1 ���� �������� ��ȯ�ϴ� �Լ� b_rand()�� �ۼ��ϰ� 5�� ȣ���Ͽ�����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int b_rand(void){
	return rand() % 2;
}

int main(void) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
		printf("%d ", b_rand());
	return 0;
}
/*
04 �������� ������ �ٿ� ���� ���� ������ �ʱ�ȭ�� �� �ѹ��� �����ϴ� ��쿡�� ���ȴ�.
������ �����Ͽ� ��ȯ�ϴ� �Լ� get_random()�� �ۼ��Ͽ� �׽�Ʈ�϶�.
get_random()�� ó������ ȣ��Ǵ� ��쿡�� srand()�� ȣ���Ͽ� ������ �õ带 �ʱ�ȭ�ϰ� �׷��� ������ �ܼ��� rand()�� ȣ���Ͽ� ������ ��ȯ�Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int get_random();

int main(void) {
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());
}

int get_random() {
	static int inited = 0;
	if (inited == 0) {
		printf("�ʱ�ȭ ����\n");
		srand((unsigned)time(NULL));
		inited++;
	}
	return rand();
}
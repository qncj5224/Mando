/*
03 �α��νÿ� ���̵� �˻��ϴ� �Լ� int chech()�� �ۼ��ؼ� �׽�Ʈ�϶�.
check()�� �ѹ� ȣ�� �� ������ ��й�ȣ�� �����ϰ� ��ġ ���θ� 0�� 1�� ��ȯ�Ѵ�.
��й�ȣ ���� 1234�� �����Ǿ� �ִٰ� �����Ѵ�. check()�� 3�� �̻� ȣ��ǰ� ���̵� ��ġ���� ������ check()�� "�α��� �õ� Ƚ�� �ʰ�" �޽����� ����Ѵ�.
check()  �Լ� �ȿ� ���� ������ �����Ͽ� ����غ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int check()
{
	static int call_count = 0;
	while (1) {
		call_count++;
		if (call_count > 3) {
			printf("�α��� �õ�Ƚ�� �ʰ�\n ");
			return 0;
		}
		printf("��й�ȣ: ");
		int n;
		scanf("%d", &n);
		if (n == 1234) {
			printf("�α��� ����!!\n ");
			return 1;
		}
	}
}
int main(void)
{
	check();
	return 0;
}
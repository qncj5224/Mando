/*
01 Ű���忡�� �ϳ��� ���ڸ� �о ������ ������ �����ϴ� ���α׷��� �ۼ��Ͽ�����. �� switch���� ����϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�:");
	c = getchar();
	switch (c) {
	case 'a':
	case 'i':
	case 'o':
	case 'u':
	case 'e':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
	}
	return 0;
}
/*
04 ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha()�� �ۼ��ϰ� �̰��� ȣ���Ͽ��� ����ڰ� �Է��� ���ڰ� ���ĺ�('a'���� 'z'����)������ �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char c) {
	if (ch >= 97 && ch <= 122)
		printf("%c�� ���ĺ� �����Դϴ�.", ch);
	else
		printf("%c�� ���ĺ��� �ƴմϴ�.", ch);
	return 0;
}

int main(void) {
	char ch;
	printf("���ڸ� �Է��Ͻÿ�.: ");
	scanf("%c", &ch);
	check_alpha(ch);
	return 0;
}
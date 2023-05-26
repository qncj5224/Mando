/*
04 전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수 check_alpha()를 작성하고 이것을 호출하여서 사용자가 입력한 문자가 알파벳('a'에서 'z'까지)인지를 판단하여 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char c) {
	if (ch >= 97 && ch <= 122)
		printf("%c는 알파벳 문자입니다.", ch);
	else
		printf("%c는 알파벳이 아닙니다.", ch);
	return 0;
}

int main(void) {
	char ch;
	printf("문자를 입력하시오.: ");
	scanf("%c", &ch);
	check_alpha(ch);
	return 0;
}
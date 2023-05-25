/*
03 로그인시에 아이디를 검사하는 함수 int chech()를 작성해서 테스트하라.
check()가 한번 호출 될 때마다 비밀번호를 질문하고 일치 여부를 0과 1로 반환한다.
비밀번호 숫자 1234로 고정되어 있다고 가정한다. check()가 3번 이상 호출되고 아이디가 일치하지 않으면 check()는 "로그인 시도 횟수 초과" 메시지를 출력한다.
check()  함수 안에 정적 변수를 선언하여 사용해보자.
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
			printf("로그인 시도횟수 초과\n ");
			return 0;
		}
		printf("비밀번호: ");
		int n;
		scanf("%d", &n);
		if (n == 1234) {
			printf("로그인 성공!!\n ");
			return 1;
		}
	}
}
int main(void)
{
	check();
	return 0;
}
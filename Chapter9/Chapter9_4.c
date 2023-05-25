/*
04 본문에서 설명한 바와 같이 정적 변수는 초기화를 딱 한번만 수행하는 경우에도 사용된다.
난수를 생성하여 반환하는 함수 get_random()을 작성하여 테스트하라.
get_random()이 처음으로 호출되는 경우에는 srand()를 호출하여 난수의 시드를 초기화하고 그렇지 않으면 단순히 rand()를 호출하여 난수를 반환한다.
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
		printf("초기화 실행\n");
		srand((unsigned)time(NULL));
		inited++;
	}
	return rand();
}
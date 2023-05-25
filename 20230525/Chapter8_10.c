/*
10 앞에서 작성한 b_rand() 함수를 이용하여 간단한 동전 던지기 게임을 시뮬레이션하여 보자.
컴퓨터가 동전을 던지고 사용자는 앞뒤를 만한다.
컴퓨터는 b_rand()를 이용하여 생성된 난수가 1이면 동전의 앞면으로 간주하고 0이면 동전의 뒷면으로 간주한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int b_rand(void) {
	return rand() % 2;
}

int main(void) {
	int user;
	char ch = 'y';
	while(1) {
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf("%d", &user);

		if (user == b_rand())
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까? (y 또는 n)");
		scanf("\n%c", &ch);
		if (ch == 'n')
			break;
	}
	return 0;
}
/*
11 사용자와 컴퓨터가 주사위 게임을 한다고 하자. 주사위를 각 3번씩 굴려서 주사위 점수를 합한다.
합친 점수가 높은 쪽이 이긴다고 하자.
*/

#include <stdio.h>
#include<stdlib.h>

int rand_dice();

int main(void) {
	srand(time(NULL));
	int com1 = rand_dice(), com2 = rand_dice(), com3 = rand_dice(), user1 = rand_dice(), user2 = rand_dice(), user3 = rand_dice(), sum_com, sum_user;
	sum_com = com1 + com2 + com3;
	sum_user = user1 + user2 + user3;
	printf("사용자 주사위=(%d, %d, %d) = %d\n", user1, user2, user3, sum_user);
	printf("컴퓨터 주사위=(%d, %d, %d) = %d\n", com1, com2, com3, sum_com);
	if (sum_com > sum_user)
		printf("컴퓨터 승");
	else if (sum_com < sum_user)
		printf("사용자 승");
	else
		printf("비겼습니다");
	return 0;
}

int rand_dice() {
	return 1 + rand() % 6;
}
/*
10. 다음 프로그램의 출력 결과는?
*/
#include <stdio.h>

int main(void) {
	for (int i = 0; i < 10; i += 2)
		printf("%d\n", i);
	return 0;
}

/*
출력 결과 :
0
2
4
6
8
가 출력된다. i가 10 일때는 조건에 맞지 않기 때문에 출력이 되지 않고 멈춘다.
또한 \n을 사용하여 줄바꿈이 일어난다.
*/
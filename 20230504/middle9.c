/*
9. 다음 프로그램은 무엇을 하는 프로그램인가 ? 예를 들어 출력 결과는 어떻게 되는가 ? (4점)
*/
#include <stdio.h>

int main(void)
{
    int num, tot = 0;
    do {
        printf("정수 입력 : ");
        scanf(" %d", &num);

        tot += num;

    } while (num != 0);
    printf("total = % d\n", tot);
}

/*
입력 받는 정수의 값 즉 num의 값을 모두 더하고 만약 num의 값이 0이라면 총 합을 출력하는 프로그램이다.
예를 들어 1 3 5 7 -1 -3 0 을 입력하면 0을 제외한 나머지의 총 합인 12가 출력되어
total = 12 가 나온다.
*/
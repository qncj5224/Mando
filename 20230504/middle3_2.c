#include <stdio.h>

int main(void)
{
    int a = 100, b = 200, c;
    c = (a == 100 || b > 200);
    printf("%d\n", c);
    return 0;
}

/* 
a == 100은 참이므로 1의 값을 가진다.
b > 200은 거짓이므로 0의 값을 가진다.
1와 0을 || 연산 즉 OR 연산을 하면 값이 1이 나온다.
출력 결과 : 1
 */
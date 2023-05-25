/*
12 순환 호출을 이용하여 피보나치 수열을 계산해보자. 피보나치 수열이란 다음과 같이 정의되는 수열이다.
        -> 0                   n = 0
fib(n)  -> 1                   n = 1
        -> fib(n-2) + fib(n-1) otherwise
즉 일반적인 경우, 앞의 두 개의 숫자를 더해서 뒤의 숫자를 만들면 된다. 정의에 따라 수열을 만들어 보면 다음과 같다.
                    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ,,,
*/
#include <stdio.h>

int fib(int n);

int main(void)
{
    int n;
        for (n = 0; n < 10; n++)
        {
            printf("fib(%d) = %d\n", n, fib(n));
        }
        return 0;
}

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 2) + fib(n - 1);
}
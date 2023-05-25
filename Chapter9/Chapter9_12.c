/*
12 ��ȯ ȣ���� �̿��Ͽ� �Ǻ���ġ ������ ����غ���. �Ǻ���ġ �����̶� ������ ���� ���ǵǴ� �����̴�.
        -> 0                   n = 0
fib(n)  -> 1                   n = 1
        -> fib(n-2) + fib(n-1) otherwise
�� �Ϲ����� ���, ���� �� ���� ���ڸ� ���ؼ� ���� ���ڸ� ����� �ȴ�. ���ǿ� ���� ������ ����� ���� ������ ����.
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
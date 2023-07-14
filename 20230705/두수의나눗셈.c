#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
double answer;
int num1, num2;

int solution(int num1, int num2) {
    answer = ((double)num1 / (double)num2) * 1000;
    return answer;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    solution(num1, num2);
    printf("%d\n", (int)answer);
    return 0;
}
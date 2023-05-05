/*
10. 다음 프로그램의 출력 결과는?
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    for (x = 0; x < 3; x++)
        for (y = 2; y >= 0; y--)
            printf("*");
}

/*
x for문은 0,1,2 총 3번 실행이 되고, y for문은 2,1,0 총 3번이 실행 되므로 총 9번의 반복이 일어난다.
\n이 없기때문에 줄 바꿈은 일어나지 않으므로 결과는
*********
가 된다.
*/

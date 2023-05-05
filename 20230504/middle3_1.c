#include <stdio.h>

int main(void)

{
    printf("%x\n", 0x20 << 2);
    return 0;
}

// 출력 결과 : 80
// 0x20 = 0010 0000 왼쪽 쉬프트 연산을 하면 1000 0000 = 8 0 따라서 80이 출력이 된다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define stackLen 5 // stackLen = 5라고 정의(바꿀수 없는 값)
typedef char data; //타입 지정 char 대신 data를 쓰겠다.

struct Stack {
    char Arr[5]; //크기를 5로 제한
    int top;
} S; //기억장소 생성

void stack() { //스택을 생성하는 함수
    S.top = -1; // top의 값을 -1로 지정함으로서 공백상태의 스택 생성
}

int isEmpty() { // 공백상태인지 아닌지를 확인하는 함수
    if (S.top <= -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void showStackData() { // 스택의 Data를 보여주는 함수
    printf("\n< stack > : ");
    for (int x = 0; x <= S.top; x++) {
        printf("%c ", S.Arr[x]);
    }
}

void push(char e) { // 항목 e를 스택의 맨위에 추가하는 함수
    if (S.top >= stackLen - 1) {
        printf("\n포화상태입니다.");
        return;
    }
    S.top += 1; //공간 늘리기
    S.Arr[S.top] = e; // 새로 들어온 값을 top으로 지정
    showStackData();
}
data pop() { // 하나의 항목을 제거하는 함수
    if (S.top < 0) {
        printf("\n 공백상태라 삭제불가");
        return '\n';
    }
    S.top -= 1; //공간 줄이기
    showStackData();
    return S.Arr[S.top + 1];
}

data peek() { // 스택을 조회하는 함수
    if (S.top < 0) {
        return'\n';
    }
    showStackData();
    return S.Arr[S.top];
}

char clear() { // 스택을 초기화하는 함수
    if (S.top < 0) {
        printf("\n이미 공백상태 입니다.");
        return '\n';
    }
    S.top = -1; //초기화하는 역할
    showStackData();
    return 0;
}
int main() {
    int num, s;
    char val, ch;
    stack(); //스택 생성

    while (1) {
        printf("\n< Stack > 1. 자료 삽입 2. 자료 삭제 3. 초기화 4. 조회 5. 프로그램 종료 : ");
        do {
            scanf("%d", &num);
        } while (num < 1 || num > 5);
        switch (num) {
        case 1: printf("삽입할 값은? ");
            while (getchar() != '\n');
            scanf("%c", &val);
            push(val);
            break;
        case 2:
            ch = pop();
            if (ch != '\n')
                printf("\n%c가 삭제되었습니다.", ch);
            break;
        case 3:
            ch = clear();
            if (ch != '\n')
                printf("초기화 하였습니다");
            break;
        case 4:
            ch = peek();
            if (ch != '\n') {
                printf("\nTOP Char: %c", ch);
                break;
            }
        }
        if (num == 5) break;
    }
    return 0;
}
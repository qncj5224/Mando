#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Length 5 // 길이를 5라고 정의 (바꿀 수 없는 값) 

char menu[2][100] = { "1 스택 생성   2 종료",
"2 종료   3 공백 확인   4 삽입   5 삭제   6 peek   7 size  8 clear " };
int menu1Sta = 1, menu1End = 2, menu2Sta = 2, menu2End = 8;

struct Queue {
    char Arr[5];
    int front, rear;
}Q; //기억장소 생성 

void queue() {
    Q.front = Q.rear = 0;
} // 도우미 변수 front , rear 생성 

int isEmpty() { //  공백상태인지 확인 
    if (Q.front == Q.rear) {
        return 1;
    }
    else {
        return 0;
    }
}

void showQueueData() {
    printf("\n< circular Queue f:%d r:%d > : ", Q.front, Q.rear);
    if (Q.front == Q.rear) return;
    int x = (Q.front + 1) % Length;
    while (1) {
        printf("%c ", Q.Arr[x]);
        if (x == Q.rear) break;
        x = (x + 1) % Length;
    }
}
void enqueue(char x) {
    if ((Q.rear + 1) % Length == Q.front) {
        printf("\n 포화상태 입니다.");
        return;
    }
    Q.rear = (Q.rear + 1) % Length;
    Q.Arr[Q.rear] = x;
    showQueueData();
}
char dequeue() {
    if (Q.rear == Q.front) {
        printf("\n 공백상태라 삭제불가");
        return '\n';
    }
    int p = Q.front;
    Q.front = (Q.front + 1) % Length;
    showQueueData();
    return Q.Arr[Q.front];
}
char peek() {
    if (Q.front == Q.rear) {
        return '\n';
    }
    showQueueData();
    return Q.Arr[Q.front + 1];
}
int size() {
    if (Q.front == Q.rear) return 0;
    int num = 0;
    int x = (Q.front + 1) % Length;
    while (1) {
        num++;
        if (x == Q.rear) break;
        x = (x + 1) % Length;
    }
    return num;
}
void clear() {
    Q.front = Q.rear = 0;
    showQueueData();
}
int main() {
    int num, menuSta, menuEnd, sw = 0, returnVal;
    char val, ch;

    while (1) {
        printf("\n\n<메뉴>  %s  : ", menu[sw]);

        if (sw == 0) {
            menuSta = menu1Sta; menuEnd = menu1End;
        }
        else {
            menuSta = menu2Sta; menuEnd = menu2End;
        }

        do {
            scanf("%d", &num);
            while (getchar() != '\n');  //버퍼에 남아 있는 자료 없애기...
        } while (num < menuSta || num > menuEnd);

        switch (num) {
        case 1:  queue();   sw = 1;   break;
        case 2:  return 0;   	      break;
        case 3:  if (isEmpty() == 1) printf("\n 공백 상태");   else  printf("\n 자료 존재 상태");	      break;
        case 4:  printf("삽입할 값은? ");
            scanf("%c", &val);   enqueue(val);       break;
        case 5:  ch = dequeue();
            if (ch != '\n')
                printf("\n%c가 삭제되었습니다.", ch);
            break;
        case 6:   ch = peek();  		if (ch != '\n')  printf("\nfront Char : %c ", ch);		break;
        case 7: 	num = size();  		printf("\nsize : %d ", num);		break;
        case 8: 	clear();  				break;
        }
    }

    return 0;
}
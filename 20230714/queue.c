#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Length 5 // ���̸� 5��� ���� (�ٲ� �� ���� ��) 

char menu[2][100] = { "1 ���� ����   2 ����",
"2 ����   3 ���� Ȯ��   4 ����   5 ����   6 peek   7 size  8 clear " };
int menu1Sta = 1, menu1End = 2, menu2Sta = 2, menu2End = 8;

struct Queue {
    char Arr[5];
    int front, rear;
}Q; //������ ���� 

void queue() {
    Q.front = Q.rear = 0;
} // ����� ���� front , rear ���� 

int isEmpty() { //  ����������� Ȯ�� 
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
        printf("\n ��ȭ���� �Դϴ�.");
        return;
    }
    Q.rear = (Q.rear + 1) % Length;
    Q.Arr[Q.rear] = x;
    showQueueData();
}
char dequeue() {
    if (Q.rear == Q.front) {
        printf("\n ������¶� �����Ұ�");
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
        printf("\n\n<�޴�>  %s  : ", menu[sw]);

        if (sw == 0) {
            menuSta = menu1Sta; menuEnd = menu1End;
        }
        else {
            menuSta = menu2Sta; menuEnd = menu2End;
        }

        do {
            scanf("%d", &num);
            while (getchar() != '\n');  //���ۿ� ���� �ִ� �ڷ� ���ֱ�...
        } while (num < menuSta || num > menuEnd);

        switch (num) {
        case 1:  queue();   sw = 1;   break;
        case 2:  return 0;   	      break;
        case 3:  if (isEmpty() == 1) printf("\n ���� ����");   else  printf("\n �ڷ� ���� ����");	      break;
        case 4:  printf("������ ����? ");
            scanf("%c", &val);   enqueue(val);       break;
        case 5:  ch = dequeue();
            if (ch != '\n')
                printf("\n%c�� �����Ǿ����ϴ�.", ch);
            break;
        case 6:   ch = peek();  		if (ch != '\n')  printf("\nfront Char : %c ", ch);		break;
        case 7: 	num = size();  		printf("\nsize : %d ", num);		break;
        case 8: 	clear();  				break;
        }
    }

    return 0;
}
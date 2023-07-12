#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define stackLen 5 // stackLen = 5��� ����(�ٲܼ� ���� ��)
typedef char data; //Ÿ�� ���� char ��� data�� ���ڴ�.

struct Stack {
    char Arr[5]; //ũ�⸦ 5�� ����
    int top;
} S; //������ ����

void stack() { //������ �����ϴ� �Լ�
    S.top = -1; // top�� ���� -1�� ���������μ� ��������� ���� ����
}

int isEmpty() { // ����������� �ƴ����� Ȯ���ϴ� �Լ�
    if (S.top <= -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void showStackData() { // ������ Data�� �����ִ� �Լ�
    printf("\n< stack > : ");
    for (int x = 0; x <= S.top; x++) {
        printf("%c ", S.Arr[x]);
    }
}

void push(char e) { // �׸� e�� ������ ������ �߰��ϴ� �Լ�
    if (S.top >= stackLen - 1) {
        printf("\n��ȭ�����Դϴ�.");
        return;
    }
    S.top += 1; //���� �ø���
    S.Arr[S.top] = e; // ���� ���� ���� top���� ����
    showStackData();
}
data pop() { // �ϳ��� �׸��� �����ϴ� �Լ�
    if (S.top < 0) {
        printf("\n ������¶� �����Ұ�");
        return '\n';
    }
    S.top -= 1; //���� ���̱�
    showStackData();
    return S.Arr[S.top + 1];
}

data peek() { // ������ ��ȸ�ϴ� �Լ�
    if (S.top < 0) {
        return'\n';
    }
    showStackData();
    return S.Arr[S.top];
}

char clear() { // ������ �ʱ�ȭ�ϴ� �Լ�
    if (S.top < 0) {
        printf("\n�̹� ������� �Դϴ�.");
        return '\n';
    }
    S.top = -1; //�ʱ�ȭ�ϴ� ����
    showStackData();
    return 0;
}
int main() {
    int num, s;
    char val, ch;
    stack(); //���� ����

    while (1) {
        printf("\n< Stack > 1. �ڷ� ���� 2. �ڷ� ���� 3. �ʱ�ȭ 4. ��ȸ 5. ���α׷� ���� : ");
        do {
            scanf("%d", &num);
        } while (num < 1 || num > 5);
        switch (num) {
        case 1: printf("������ ����? ");
            while (getchar() != '\n');
            scanf("%c", &val);
            push(val);
            break;
        case 2:
            ch = pop();
            if (ch != '\n')
                printf("\n%c�� �����Ǿ����ϴ�.", ch);
            break;
        case 3:
            ch = clear();
            if (ch != '\n')
                printf("�ʱ�ȭ �Ͽ����ϴ�");
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
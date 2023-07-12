#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

// ���� ����ü ����
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// ���� �ʱ�ȭ
void initialize(Stack* stack) {
    stack->top = -1;
}

// ������ ����ִ��� Ȯ��
bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}

// ������ ���� á���� Ȯ��
bool isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// ���ÿ� ������ ����
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full.\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
}

// ���ÿ��� ������ ���� �� ��ȯ
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1;  // ���� ��
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;

    return poppedItem;
}

// ������ �� �� ������ Ȯ��
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1;  // ���� ��
    }

    return stack->items[stack->top];
}

int main() {
    Stack stack;
    initialize(&stack);

    char ch;
    printf("������ �Է��ϼ���: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            push(&stack, ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (ch) {
            case '+':
                push(&stack, operand1 + operand2);
                break;
            case '-':
                push(&stack, operand1 - operand2);
                break;
            case '*':
                push(&stack, operand1 * operand2);
                break;
            case '/':
                push(&stack, operand1 / operand2);
                break;
            default:
                printf("�������� �ʴ� ������ �Դϴ�.\n");
                return -1;
            }
        }
    }

    printf("���: %d\n", peek(&stack));

    return 0;
}

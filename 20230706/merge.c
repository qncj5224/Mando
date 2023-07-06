#include <stdio.h>
#include<stdlib.h>
#define SIZE 50

void merge_arry(int* A, int* B, int* C, int size);
void rand_arry(int* A, int *check,int size);
void sort_arry(int *a, int size);
void print_arry(char* name, int* a, int size);
void check_array(int* check);

int main(void)
{
    srand((unsigned)time(NULL));
    int A[SIZE];
    int B[SIZE];
    int C[2*SIZE];
    int check[100];
    check_array(check);
    rand_arry(A,check, SIZE);
    rand_arry(B,check, SIZE);
    sort_arry(A, SIZE);
    sort_arry(B, SIZE);
    print_arry("A", A, SIZE);
    print_arry("B", B, SIZE);
    merge_arry(A, B, C, SIZE);
    print_arry("C", C, 2*SIZE);
    return 0;
}

void rand_arry(int* A, int * check, int size) { // 랜덤지정
    for (int i = 0; i < size; i++){
            A[i] = rand() % 100;
        while (check[A[i]] != 0) {
            A[i] = rand() % 100;
        }
        check[A[i]] = 1;
    }
    check_array(check);
}

void merge_arry(int* A, int* B, int* C, int size) // 변환
{
    int i, a, b, c, temp;
    for (a = 0, b = 0, c = 0; a < size && b < size;) {
        if (A[a] < B[b])
            C[c++] = A[a++];
        else if (A[a] > B[b])
            C[c++] = B[b++];
        else {
            C[c++] = A[a++];
            b++;
        }
    }
    for (i = a; i < size; i++)
        C[c++] = A[i];
    for (i = b; i < size; i++)
        C[c++] = B[i];
}

void print_arry(char* name, int* a, int size) // 출력
{
    int i;
    printf("%s[] = ", name);
    for (i = 0; i < size; i++) {
        if(a[i]>=0)
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort_arry(int* a, int size) { // 오름차순
    int i, j;
    int tmp;
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (*(a + i) > *(a + j)) {
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    }
}

void check_array(int *check) { // 체크함수 생성
    for (int i = 0; i < 100; i++)
        check[i] = 0;
}
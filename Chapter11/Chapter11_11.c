/*
11. 2개의 정렬된 배열 A[]와 B[]가 있다고 가정하자.
이 2개의 배열을 합쳐서 하나의 정렬된 배열 C[]로 만드는 함수를 작성하고 테스트한다.
다음과 같은 함수 원형을 가진다고 가정하라.
void merge(int *A, int *B, int *C, int size){
			...
			}
여기서 배열 A[], B[]는 똑같은 크기로 정의되어 있다고 가정한다.
배열 C[]에는 충분한 공간이 확보되어 있다고 가정하자. 합치는 알고리즘은 다음과 같다.
먼저 A[0]와 B[0]를 비교한다. 만약 A[0]보다 B[0]보다 작으면 A[0]를 C[0]에 복사한다.
다음에는 A[1]와 B[0]를 비교한다. 이번에는 B[0]가 A[1]보다 작다면 B[0]를 C[1]에 저장한다.
똑같은 방식으로 남아있는 요소들을 비교하여 더 작은 요소를 C[]로 복사한다.
만약 A[]나 B[]중에서 어느 하나가 먼저 끝나게 되면 남아있는 요소들을 전부 C[]로 이동한다.
*/
#include <stdio.h>
#define N_DATA 4
void merge(int* A, int* B, int* C, int size);
void array_print(char* name, int* a, int size)
{
    int i;
    printf("%s[] = ", name);
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(void)
{
    int i;

    int A[] = { 2, 5, 7, 8 };
    int B[] = { 1, 3, 4, 6 };
    int C[8];
    array_print("A", A, N_DATA);
    array_print("B", B, N_DATA);
    merge(A, B, C, 4);
    array_print("C", C, 2 * N_DATA);
    return 0;
}

void merge(int* A, int* B, int* C, int size)
{
    int i, a, b, c;

    for (a = 0, b = 0, c = 0; a < size && b < size;) {
        if (A[a] <= B[b])
            C[c++] = A[a++];
        else
            C[c++] = B[b++];
    }
    for (i = a; i < size; i++)
        C[c++] = A[i];
    for (i = b; i < size; i++)
        C[c++] = B[i];
}
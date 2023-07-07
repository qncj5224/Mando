/*
11. 2���� ���ĵ� �迭 A[]�� B[]�� �ִٰ� ��������.
�� 2���� �迭�� ���ļ� �ϳ��� ���ĵ� �迭 C[]�� ����� �Լ��� �ۼ��ϰ� �׽�Ʈ�Ѵ�.
������ ���� �Լ� ������ �����ٰ� �����϶�.
void merge(int *A, int *B, int *C, int size){
			...
			}
���⼭ �迭 A[], B[]�� �Ȱ��� ũ��� ���ǵǾ� �ִٰ� �����Ѵ�.
�迭 C[]���� ����� ������ Ȯ���Ǿ� �ִٰ� ��������. ��ġ�� �˰����� ������ ����.
���� A[0]�� B[0]�� ���Ѵ�. ���� A[0]���� B[0]���� ������ A[0]�� C[0]�� �����Ѵ�.
�������� A[1]�� B[0]�� ���Ѵ�. �̹����� B[0]�� A[1]���� �۴ٸ� B[0]�� C[1]�� �����Ѵ�.
�Ȱ��� ������� �����ִ� ��ҵ��� ���Ͽ� �� ���� ��Ҹ� C[]�� �����Ѵ�.
���� A[]�� B[]�߿��� ��� �ϳ��� ���� ������ �Ǹ� �����ִ� ��ҵ��� ���� C[]�� �̵��Ѵ�.
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
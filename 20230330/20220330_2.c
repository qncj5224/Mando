#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	unsigned int num;
	printf("10����: ");
	scanf("%u", &num);
	unsigned int mask = 1 << 7; // mask = 10000000  mask = 128�� �ص� �������
	printf("2����: ");
	((num & mask) == 0) ? printf("0") : printf("1"); // ���� �ٸ��� 0 ������ 1��� 
	mask = mask >> 1; // ������ ��Ʈ�� 1��Ʈ �̵�
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1");
 	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	printf("\n");

	return 0;
}
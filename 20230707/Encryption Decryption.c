#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void encrypt(int shift);
void Decoding(int shift);

int main(void) {
	int shift = 3;
	char menu;
	printf("1. ��ȣȭ\n2. ��ȣȭ\n");
	menu = _getch();
	if (menu == '1')
		encrypt(shift);
	else if (menu == '2')
		Decoding(shift);
	return 0;
}

void Decoding(int shift) {
	char cipher[50];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(cipher, 50);
	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'A' && cipher[i] <= 'z') {
			cipher[i] -= shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s \n", cipher);
}

void encrypt(int shift) {
	char cipher[50];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(cipher, 50);
	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'A' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s \n", cipher);
}
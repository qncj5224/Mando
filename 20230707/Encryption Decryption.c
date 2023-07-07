#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void encrypt(int shift);
void Decoding(int shift);

int main(void) {
	int shift = 3;
	char menu;
	printf("1. 암호화\n2. 복호화\n");
	menu = _getch();
	if (menu == '1')
		encrypt(shift);
	else if (menu == '2')
		Decoding(shift);
	return 0;
}

void Decoding(int shift) {
	char cipher[50];
	printf("문자열을 입력하시오: ");
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
	printf("복호화된 문자열: %s \n", cipher);
}

void encrypt(int shift) {
	char cipher[50];
	printf("문자열을 입력하시오: ");
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
	printf("암호화된 문자열: %s \n", cipher);
}
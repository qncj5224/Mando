#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printOptions()
{
	printf("\n===========================================================\n");
	printf(" '1' 인치를 야드로 변환\n");
	printf(" '2' 인치를 cm로 변환\n");
	printf(" '3' 야드를 cm로 변환\n");
	printf(" '4' 야드를 인치로 변환\n");
	printf(" '5' cm를 야드로 변환\n");
	printf(" '6' cm를 인치로 변환\n");
	printf(" '7' 종료\n");
	printf("===========================================================\n");
}

double I2Y(double inch) // 인치 -> 야드
{
	return inch * 0.027778;
}

double I2C(double inch) // 인치 -> cm
{
	return inch * 2.54;
}

double Y2C(double yard) // 야드 -> cm
{
	return yard * 91.44;
}

double Y2I(double yard) // 야드 -> 인치
{
	return yard * 36;
}

double C2Y(double cm) // cm -> 야드
{
	return cm * 0.010936;
}

double C2I(double cm) // cm -> 인치
{
	return cm * 0.393701;
}

int main(void) {
	int choice;
	double inch, yard, cm;
	while (1) {
		printOptions();
		printf("메뉴에서 선택하세요.");
		scanf_s("%d", &choice);
		if (choice == 7) break;
		else if (choice == 1) {
			printf("인치: ");
			scanf_s("%lf", &inch);
			printf("야드: %lf \n",I2Y(inch));
		}
		else if (choice == 2) {
			printf("인치: ");
			scanf_s("%lf", &inch);
			printf("cm: %lf \n", I2C(inch));
		}
		else if (choice == 3) {
			printf("야드: ");
			scanf_s("%lf", &yard);
			printf("cm: %lf \n", Y2C(yard));
		}
		else if (choice == 4) {
			printf("야드: ");
			scanf_s("%lf", &yard);
			printf("인치: %lf \n", Y2I(yard));
		}
		else if (choice == 5) {
			printf("CM: ");
			scanf_s("%lf", &cm);
			printf("야드: %lf \n", C2Y(cm));
		}
		else if (choice == 6) {
			printf("CM: ");
			scanf_s("%lf", &cm);
			printf("인치: %lf \n", C2I(cm));
		}
	}
	return 0;
}
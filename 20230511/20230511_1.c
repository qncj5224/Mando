#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printOptions()
{
	printf("\n===========================================================\n");
	printf(" '1' ��ġ�� �ߵ�� ��ȯ\n");
	printf(" '2' ��ġ�� cm�� ��ȯ\n");
	printf(" '3' �ߵ带 cm�� ��ȯ\n");
	printf(" '4' �ߵ带 ��ġ�� ��ȯ\n");
	printf(" '5' cm�� �ߵ�� ��ȯ\n");
	printf(" '6' cm�� ��ġ�� ��ȯ\n");
	printf(" '7' ����\n");
	printf("===========================================================\n");
}

double I2Y(double inch) // ��ġ -> �ߵ�
{
	return inch * 0.027778;
}

double I2C(double inch) // ��ġ -> cm
{
	return inch * 2.54;
}

double Y2C(double yard) // �ߵ� -> cm
{
	return yard * 91.44;
}

double Y2I(double yard) // �ߵ� -> ��ġ
{
	return yard * 36;
}

double C2Y(double cm) // cm -> �ߵ�
{
	return cm * 0.010936;
}

double C2I(double cm) // cm -> ��ġ
{
	return cm * 0.393701;
}

int main(void) {
	int choice;
	double inch, yard, cm;
	while (1) {
		printOptions();
		printf("�޴����� �����ϼ���.");
		scanf_s("%d", &choice);
		if (choice == 7) break;
		else if (choice == 1) {
			printf("��ġ: ");
			scanf_s("%lf", &inch);
			printf("�ߵ�: %lf \n",I2Y(inch));
		}
		else if (choice == 2) {
			printf("��ġ: ");
			scanf_s("%lf", &inch);
			printf("cm: %lf \n", I2C(inch));
		}
		else if (choice == 3) {
			printf("�ߵ�: ");
			scanf_s("%lf", &yard);
			printf("cm: %lf \n", Y2C(yard));
		}
		else if (choice == 4) {
			printf("�ߵ�: ");
			scanf_s("%lf", &yard);
			printf("��ġ: %lf \n", Y2I(yard));
		}
		else if (choice == 5) {
			printf("CM: ");
			scanf_s("%lf", &cm);
			printf("�ߵ�: %lf \n", C2Y(cm));
		}
		else if (choice == 6) {
			printf("CM: ");
			scanf_s("%lf", &cm);
			printf("��ġ: %lf \n", C2I(cm));
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printOptions()
{
	printf("\n===========================================================\n");
	printf(" '1' ��ġ\n");
	printf(" '2' �ߵ�\n");
	printf(" '3' cm\n");
	printf(" '4' mile\n");
	printf(" '5' ����\n");
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

double I2M(double inch) // ��ġ -> mile
{
	return inch * 0.000016;
}

double Y2C(double yard) // �ߵ� -> cm
{
	return yard * 91.44;
}

double Y2I(double yard) // �ߵ� -> ��ġ
{
	return yard * 36;
}

double Y2M(double yard) // �ߵ� -> mile
{
	return yard * 0.000568;
}

double C2Y(double cm) // cm -> �ߵ�
{
	return cm * 0.010936;
}

double C2I(double cm) // cm -> ��ġ
{
	return cm * 0.393701;
}

double C2M(double cm) // cm -> mile
{
	return cm * 0.000006;
}

double M2I(double mile) // mile -> inch
{
	return mile * 63, 360;
}

double M2Y(double mile) // mile -> yard
{
	return mile * 1, 760;
}

double M2C(double mile) //  mile -> cm
{
	return mile * 160, 934.4;
}

int main(void) {
	int choice, choice2;
	double inch, yard, cm, mile;
	while (1) {
		printOptions();
		printf("�޴����� �����ϼ���.");
		scanf_s("%d", &choice);
		if (choice == 5) break;
		else if (choice == 1) {
			printf("===========================================================\n");
			printf("1. yard�� ��ȯ: \n");
			printf("2. cm�� ��ȯ: \n");
			printf("3. mile�� ��ȯ\n");
			printf("===========================================================\n");
			scanf_s("%d", &choice2);
			switch (choice)
			{
			case 1:
				printf("inch: ");
				scanf_s("%lf", &inch);
				printf("yard: %lf \n", I2Y(inch));
				break;
			case 2:
				printf("inch: ");
				scanf_s("%lf", &inch);
				printf("cm: %lf \n", I2C(inch));
				break;
			case 3:
				printf("inch: ");
				scanf_s("%lf", &inch);
				printf("mile: %lf \n", I2M(inch));
				break;
			}
		}
		else if (choice == 2) {
			printf("===========================================================\n");
			printf("1. inch�� ��ȯ: \n");
			printf("2. cm�� ��ȯ: \n");
			printf("3. mile�� ��ȯ\n");
			printf("===========================================================\n");
			scanf_s("%d", &choice2);
			switch (choice)
			{
			case 1:
				printf("yard: ");
				scanf_s("%lf", &yard);
				printf("inch: %lf \n", Y2I(yard));
				break;
			case 2:
				printf("yard: ");
				scanf_s("%lf", &yard);
				printf("cm: %lf \n", Y2C(yard));
				break;
			case 3:
				printf("yard: ");
				scanf_s("%lf", &yard);
				printf("mile: %lf \n", Y2M(yard));
				break;
			}
		}
		else if (choice == 3) {
			printf("===========================================================\n");
			printf("1. inch�� ��ȯ: \n");
			printf("2. yard�� ��ȯ: \n");
			printf("3. mile�� ��ȯ\n");
			printf("===========================================================\n");
			scanf_s("%d", &choice2);
			switch (choice)
			{
			case 1:
				printf("cm: ");
				scanf_s("%lf", &cm);
				printf("inch: %lf \n", C2I(cm));
				break;
			case 2:
				printf("cm: ");
				scanf_s("%lf", &cm);
				printf("yard: %lf \n", C2Y(cm));
				break;
			case 3:
				printf("cm: ");
				scanf_s("%lf", &cm);
				printf("mile: %lf \n", C2M(cm));
				break;
			}
		}
		else if (choice == 3) {
			printf("===========================================================\n");
			printf("1. inch�� ��ȯ: \n");
			printf("2. yard�� ��ȯ: \n");
			printf("3. cm�� ��ȯ\n");
			printf("===========================================================\n");
			scanf_s("%d", &choice2);
			switch (choice)
			{
			case 1:
				printf("mile: ");
				scanf_s("%lf", &mile);
				printf("inch: %lf \n", M2I(mile));
				break;
			case 2:
				printf("mile: ");
				scanf_s("%lf", &mile);
				printf("yard: %lf \n", M2Y(mile));
				break;
			case 3:
				printf("mile: ");
				scanf_s("%lf", &mile);
				printf("cm: %lf \n", M2C(mile));
				break;
			}
		}
	}
	return 0;
}
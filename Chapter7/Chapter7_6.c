/*
06 ���忡�� ������ ���� ���⸦ ���� ���� �ִ�. �� ���� ���α׷��� �޴��� �߰��ϵ��� �Ѵ�.
������ ���� �޴��� ȭ�鿡 ����ϰ� ����ڰ� �޴� �߿��� �ϳ��� ������ ������ �ݺ��� ����Ѵ�.
do...while �ݸ��� ����Ͽ� ����ڰ� ������ ������ �ߴ����� �˻��ϵ��� �϶�. 
���� ����ڰ� A,S,M,D,Q�� �ƴ� �ٸ� ���ڸ� �Է��ϸ� "������ �����Ͻÿ�:" �޽����� ����ؼ� ����Ѵ�.
�ϳ��� �޴��� ���õǸ� �ش�Ǵ� ������ �����ϰ� �ٽ� �޴��� ������ �� �ֵ��� �϶�.
�ݺ��� �����ϴ� �޴��� Q�� break ���� �̿��Ͽ� �����ϵ��� �϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char menu,x;
	int num1, num2;

	printf("********************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("********************\n");

	do
	{
		printf("������ �����ϼ���: ");
		scanf("%s", &menu); // %c�� ������ ���ͱ��� �ι� �Է����� ������ ����Ʈ���� �ι��ݺ� ���� ���ڿ��� �޾ƾ��Ѵ�.


		if (menu == 'Q')
			break;

		if (menu == 'A')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��ϼ���:  ");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", num1 + num2);
			continue;
		}
		if (menu == 'S')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��ϼ���: ");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", num1 - num2);
			continue;
		}
		if (menu == 'M')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��ϼ���: ");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", num1 * num2);
			continue;
		}
		if (menu == 'D')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��ϼ���: ");
			scanf("%d %d", &num1, &num2);
			printf("%f\n", (float)num1 / num2);
		}
	} while (1);
	return 0;
}
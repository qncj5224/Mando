/*
04 ��ǻ�Ϳ� ����, ����, �� ������ �ϴ� ���α׷��� �ۼ��϶�. ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ����, ����, �� �߿��� ���Ƿ� �ϳ��� �����Ѵ�.
����ڴ� ���α׷��� �Է� �ȳ� �޼����� ����, 3�� �߿��� �ϳ��� �����ϰ� �ȴ�. ������� ������ ������ ��ǻ�ʹ� ������ ������ �����Ͽ��� ���� �̰����, �������� �˷��ش�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int select;
    int pc_select = (rand() % 3 + 1);
    

    printf("�����Ͻÿ� ( 1 : ����   2 : ����   3 : ��  ) ");
    scanf("%d", &select);

    if (select == pc_select)
    {
        switch (pc_select)
        {
        case 1:
            printf("��ǻ���� ���� : ����\n");
            break;
        case 2:
            printf("��ǻ���� ���� : ����\n");
            break;
        case 3:
            printf("��ǻ���� ���� : ��\n");
            break;
        }
        printf("�����");
    }

    else if ((select == 1 && pc_select == 2) || (select == 2 && pc_select == 3) || (select == 3 && pc_select == 1))
    {
        switch (pc_select)
        {
        case 1:
            printf("��ǻ���� ���� : ����\n");
            break;
        case 2:
            printf("��ǻ���� ���� : ����\n");
            break;
        case 3:
            printf("��ǻ���� ���� : ��\n");
            break;
        }
        printf("��ǻ�Ͱ� �̰���");
    }

    else
    {
        switch (pc_select)
        {
        case 1:
            printf("��ǻ���� ���� : ����\n");
            break;
        case 2:
            printf("��ǻ���� ���� : ����\n");
            break;
        case 3:
            printf("��ǻ���� ���� : ��\n");
            break;
        }
        printf("����ڰ� �̰���");
    }

    return 0;
}

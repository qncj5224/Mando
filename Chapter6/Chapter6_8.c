/*
08 ���� ������ �����̿���� ������ ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
������ ������ ���� �������� �����ȴ�. ���� �ð��� ������� ���̸� �Է¹޾Ƽ� �����Ͽ��� �ϴ� ����� ȭ�鿡 ����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int time, age, fee;

    printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");

    scanf("%d %d", &time, &age);

    if (time < 17) {

        if (age <= 12 && age >= 65) fee = 25000;

        else  fee = 34000;
    }
    else fee = 10000;

    printf("����� %d�Դϴ�. \n", fee);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void) {
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int guess, tries=0;
	printf("%d", answer);
	do {
		printf("������ �����Ͽ����ÿ�.: ");
		scanf("%d", &guess);
		tries++;
		
		if (guess > answer)
			printf("������ ������ �����ϴ�.\n");
		if (guess < answer)
			printf("������ ������ �����ϴ�.\n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ�� = %d \n", tries);
	return 0;
}
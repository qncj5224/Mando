#include <stdio.h>

int main(void) {
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i <= 30; i++) {
		sum1 += i * i + 1;
	}
	printf("1번식의 답은 : %d\n\n", sum1);

	for (int i = 10; i <= 30; i++) {
		for (int j = 0; j <= 5; j++) {
			sum2 += i + j;
		}
	}
	printf("2번식의 답은 : %d", sum2);
	return 0;
}

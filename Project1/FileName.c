#include <stdio.h>

int main(void)
{
	int i,j;
	int sum = 0;

	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (j == i)
			sum = sum + j;
	}
	printf("0부터 100까지 소수의 합은 %d 입니다", sum);
	return 0;
}
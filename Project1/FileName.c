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
	printf("0���� 100���� �Ҽ��� ���� %d �Դϴ�", sum);
	return 0;
}
#include<stdio.h>

int main(void)
{
	int i, num;

	while (1) {
		printf("정수를 입력하시오:");
		scanf("%d", &num);


		if (num < 0) {
			printf("음수입니다\n");
		}

		else {
			do {
				printf("%d", num % 10);
				num /= 10;
			} while (num != 0);

			printf("\n");
			break;
		}
	}

	return 0;
}
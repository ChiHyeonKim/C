#include<stdio.h>

int main(void)
{
	int i, num;

	while (1) {
		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &num);


		if (num < 0) {
			printf("�����Դϴ�\n");
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
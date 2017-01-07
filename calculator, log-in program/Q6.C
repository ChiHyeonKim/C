//#include<stdio.h>
//
//int num;
//
//void show_digit(int num);
//
//int main(void)
//{
//	printf("정수를 입력하시오:");
//	scanf("%d", &num);
//	show_digit(num);
//
//	return 0;
//}
//
//void show_digit(int num) {
//	if (num <= 0)
//		return 0;
//	show_digit(num/10);
//	printf("%d ", num%10);
//}
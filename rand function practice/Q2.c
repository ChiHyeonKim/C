//#include<stdio.h>
//
//int even(int n);
//int absolute(int n);
//int sign(int n);
//
//
//int main(void)
//{
//	int num;
//
//	printf("정수를 입력하시오:");
//	scanf("%d", &num);
//
//	if ( even(num) == 0 )
//		printf("even()의 결과: 홀수\n");
//	else if ( even(num) == 1 )
//		printf("even()의 결과: 짝수\n");
//
//	printf("absolute()의 결과 : %d\n", absolute(num));
//
//	if ( sign(num) == -1 )
//		printf("sign()의 결과: 음수\n");
//	else if ( sign(num) == 1 )
//		printf("sign()의 결과: 양수\n");	
//	else if ( sign(num) == 0 )
//		printf("sign()의 결과: 0");	
//
//}
//
//int even(int n)
//{
//	if( n % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int absolute(int n)
//{
//	if (n<0)
//		n = -n;
//	return n;
//}
//
//int sign(int n)
//{
//	if (n<0)
//		return -1;
//	else if (n>0)
//		return 1;
//	else if (n==0)
//		return 0;
//}
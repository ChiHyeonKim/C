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
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &num);
//
//	if ( even(num) == 0 )
//		printf("even()�� ���: Ȧ��\n");
//	else if ( even(num) == 1 )
//		printf("even()�� ���: ¦��\n");
//
//	printf("absolute()�� ��� : %d\n", absolute(num));
//
//	if ( sign(num) == -1 )
//		printf("sign()�� ���: ����\n");
//	else if ( sign(num) == 1 )
//		printf("sign()�� ���: ���\n");	
//	else if ( sign(num) == 0 )
//		printf("sign()�� ���: 0");	
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
//#include<stdio.h>
//
//int main(void)
//{
//	int i, years;
//	double total, rate, investment;
//
//	printf("����: ");
//	scanf("%lf", &investment);
//
//	printf("����(%%): ");
//	scanf("%lf", &rate);
//
//	printf("�Ⱓ(��): ");
//	scanf("%d", &years);
//
//	printf("==========================\n");
//	printf("����\t������\n");
//	printf("==========================\n");
//
//	total = investment;
//	rate /= 100.0;
//
//	for(i=0; i<years; i++)
//	{
//		total = total * (1 + rate); //���ο� ������ ���
//		printf("%2d\t%0.11f\n", i+1, total);
//	}
//
//	return 0;
//
//}
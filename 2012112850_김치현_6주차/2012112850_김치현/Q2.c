//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	double a, b, c, dis;
//
//	printf("��� a�� �Է��Ͻÿ�: ");
//	scanf("%lf", &a);
//
//	printf("��� b�� �Է��Ͻÿ�: ");
//	scanf("%lf", &b);
//
//	printf("��� c�� �Է��Ͻÿ�: ");
//	scanf("%lf", &c);
//
//	if( a==0 ) //a�� 0�̸� ������������ �ȴ�.
//		printf("�������� ���� %lf�Դϴ�.\n", -c/b);
//	else{
//		dis = b*b -4.0*a*c ; //sqrt�� �������� ����ϴ� ���̺귯�� �Լ��̴�.
//
//		if (dis>0){ //�Ǻ����� 0�̻��̸� �Ǳ� 2���� ����Ѵ�.
//			printf("�������� ���� %lf�Դϴ�.\n", (-b + sqrt(dis)) / (2.0*a));
//			printf("�������� ���� %lf�Դϴ�.\n", (-b - sqrt(dis)) / (2.0*a));
//		}
//
//		else if (dis==0){
//			printf("�������� ���� %lf�Դϴ�.\n", ( (-b  / (2.0*a) ) ) );
//		}
//		
//		else
//			printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
//	}
//
//	return 0;
//}
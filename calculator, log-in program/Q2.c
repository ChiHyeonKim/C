//#include<stdio.h>
//
//static int sum_count=0;
//static int sub_count=0;
//static int mul_count=0;
//static int div_count=0;
//static int a, b;
//
//void sum(a, b);
//void sub(a, b);
//void mul(a, b);
//void div(a, b);
//void not();
//
//int main(void)
//{
//	while (1) {
//		static char op;
//		printf("������ �Է��Ͻÿ�:");
//		scanf("%d %c %d", &a, &op, &b);
//
//		switch (op) {
//		case '+':
//			sum(a, b);
//			break;
//		case '-':
//			sub(a, b);
//			break;
//		case '*':
//			mul(a, b);
//			break;
//		case '/':
//			div(a, b);
//			break;
//		default:
//			not();
//			break;
//		}
//	}
//
//	return 0;
//}
//
//void sum(int a, int b) {
//	sum_count++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", sum_count);
//	printf("���� ���:%d\n", a + b);
//}
//
//void sub(int a, int b) {
//	sub_count++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", sub_count);
//	printf("���� ���:%d\n", a - b);
//}
//
//void mul(int a, int b) {
//	mul_count++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", mul_count);
//	printf("���� ���:%d\n", a * b);
//}
//
//void div(int a, int b) {
//	div_count++;
//	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", div_count);
//	printf("���� ���:%d\n", a / b);
//}
//
//void not() {
//	printf("�������� �ʴ� �������Դϴ�.\n");
//}
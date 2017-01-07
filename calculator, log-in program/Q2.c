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
//		printf("연산을 입력하시오:");
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
//	printf("덧셈은 총 %d번 실행되었습니다.\n", sum_count);
//	printf("연산 결과:%d\n", a + b);
//}
//
//void sub(int a, int b) {
//	sub_count++;
//	printf("뺄셈은 총 %d번 실행되었습니다.\n", sub_count);
//	printf("연산 결과:%d\n", a - b);
//}
//
//void mul(int a, int b) {
//	mul_count++;
//	printf("곱셈은 총 %d번 실행되었습니다.\n", mul_count);
//	printf("연산 결과:%d\n", a * b);
//}
//
//void div(int a, int b) {
//	div_count++;
//	printf("나눗셈은 총 %d번 실행되었습니다.\n", div_count);
//	printf("연산 결과:%d\n", a / b);
//}
//
//void not() {
//	printf("지원하지 않는 연산자입니다.\n");
//}
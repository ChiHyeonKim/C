//#include<stdio.h>
//
//int main(void)
//{
//	char op;
//	int a,b;
//
//	printf("******************\n");
//	printf("A---- Add\n");
//	printf("S---- Subtract\n");
//	printf("M---- Multiply\n");
//	printf("D---- Devide\n");
//	printf("Q---- Quit\n");
//	printf("******************\n");
//
//
//	while(1){
//		printf("연산을 선택하시오:");
//		scanf(" %c", &op);
//
//		if(op == 'A'){
//			printf("두수를 공백으로 분리하여 입력하시오:");
//			scanf("%d %d", &a, &b);
//			printf("연산의 결과는 %d입니다.\n", a+b);
//		}
//
//		else if(op == 'S'){
//			printf("두수를 공백으로 분리하여 입력하시오:");
//			scanf("%d %d", &a, &b);
//			printf("연산의 결과는 %d입니다.\n", a-b);
//		}
//
//		else if(op == 'M'){
//			printf("두수를 공백으로 분리하여 입력하시오:");
//			scanf("%d %d", &a, &b);
//			printf("연산의 결과는 %d입니다.\n", a*b);
//		}
//
//		else if(op == 'D'){
//			printf("두수를 공백으로 분리하여 입력하시오:");
//			scanf("%d %d", &a, &b);
//			printf("연산의 결과는 %d입니다.\n", a/b);
//		}
//
//		else if(op == 'Q')
//			break;
//	}
//	return 0;
//
//}
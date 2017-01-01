//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	double a, b, c, dis;
//
//	printf("계수 a를 입력하시오: ");
//	scanf("%lf", &a);
//
//	printf("계수 b를 입력하시오: ");
//	scanf("%lf", &b);
//
//	printf("계수 c를 입력하시오: ");
//	scanf("%lf", &c);
//
//	if( a==0 ) //a가 0이면 일차방정식이 된다.
//		printf("방정식의 근은 %lf입니다.\n", -c/b);
//	else{
//		dis = b*b -4.0*a*c ; //sqrt는 제곱근을 계산하는 라이브러리 함수이다.
//
//		if (dis>0){ //판별식이 0이상이면 실근 2개를 출력한다.
//			printf("방정식의 근은 %lf입니다.\n", (-b + sqrt(dis)) / (2.0*a));
//			printf("방정식의 근은 %lf입니다.\n", (-b - sqrt(dis)) / (2.0*a));
//		}
//
//		else if (dis==0){
//			printf("방정식의 근은 %lf입니다.\n", ( (-b  / (2.0*a) ) ) );
//		}
//		
//		else
//			printf("실근이 존재하지 않습니다.\n");
//	}
//
//	return 0;
//}
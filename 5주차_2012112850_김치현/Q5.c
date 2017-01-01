//#include<stdio.h>
//int main(void)
//{
//	int a, feet; //키 입력, 피트 변수
//	double inch; //인치 변수
//
//	printf("키를 입력하시오:");
//	scanf("%d", &a);
//
//	feet=a/(2.54*12);				//피트 계산
//	inch=(a-(2.54*12*feet))/2.54;	//(입력받은 cm) - (피트->cm 로 변환) = cm 를 다시 인치로 변환 
//
//	printf("%dcm는 %d피트 %lf인치 입니다\n", a, feet, inch);
//
//	return 0;
//}
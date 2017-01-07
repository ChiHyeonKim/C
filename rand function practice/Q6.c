//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int b_rand();
//
//int main(void)
//{
//	char yn='z';
//	int answer;
//	
//	while(yn != 'n'){
//
//	printf("앞면 또는 뒷면 <1 또는 0> :");
//	scanf("%d",&answer);
//
//	if ( answer == b_rand() ) {
//		printf("맞았습니다.\n");
//		printf("계속하시겠습니까?<y 또는 n>");
//		scanf(" %c", &yn);
//	}
//		
//	else{
//		printf("틀렸습니다.\n");
//		printf("계속하시겠습니까?<y 또는 n>");
//		scanf(" %c", &yn);
//	}
//	}
//}
//
//int b_rand()
//{
//	srand( (unsigned)time(NULL));
//	return rand()%2;
//}
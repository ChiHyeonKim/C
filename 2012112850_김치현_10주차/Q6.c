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
//	printf("�ո� �Ǵ� �޸� <1 �Ǵ� 0> :");
//	scanf("%d",&answer);
//
//	if ( answer == b_rand() ) {
//		printf("�¾ҽ��ϴ�.\n");
//		printf("����Ͻðڽ��ϱ�?<y �Ǵ� n>");
//		scanf(" %c", &yn);
//	}
//		
//	else{
//		printf("Ʋ�Ƚ��ϴ�.\n");
//		printf("����Ͻðڽ��ϱ�?<y �Ǵ� n>");
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
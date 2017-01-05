#include<stdio.h>

int main(void)
{
	int count=0, sum=0, num[count], i, j, max, maxcount=0;	//count = 입력 받는 정수의 갯수를 저장, sum = 총 합을 저장, num[count] = 각 원소의 정수를 저장, i,j = for문 변수, max = 가장 많은 빈도 수를 나타내는 숫자, maxcount = 숫자의 횟수   
	int numbercount[10] = {0};	//배열 원소의 빈도횟수를 저장하는 배열 
	
	printf("몇개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &count);
	printf("0에서 9까지의 정수를 %d개 입력해주세요\n",count);
	
	for(i=0; i<count; i++){				//입력하고 싶은 정수의 개수만큼 입력받는 for문 
		printf("%d번째 수 : ", i+1);
		scanf("%d", &num[count]);		//입력받은 정수를 num 변수에 저장 
		sum += num[count];				//sum 변수에 정수 저장 
		
		for(j=0; j<10; j++){			
			if(num[count] == j){		//입력 횟수를 저장하는 for문  
			numbercount[j]++;			//입력받은 정수의 입력 횟수를 numbercount에 저장 
			}
		}
	}
	
	printf("\n************\n");
	printf("   평균\n");
	printf("************\n");
	
	printf("배열 원소의 수는 %d이고 배열 원소의 전체 합은 %d 이므로 평균은 %.2lf이다.\n\n", count, sum, (double)sum/count );
	
	printf("************\n");
	printf("   분포\n");
	printf("************\n");
	printf("---------------------------------------------------\n");
	printf("     수     횟수     히스토그램\n");	
	printf("---------------------------------------------------\n");
	
	for(i=0; i<10; i++){									//결과 출력을 위한 for 문  
		printf("%6d%7d        ",i, numbercount[i]);
		
		for(j=0; j<numbercount[i]; j++){					//입력받은 횟수만큼 *를 그리기 위한 for문  
			printf("*");
		}
		printf("\n");
	}
	
	printf("---------------------------------------------------\n");
	
	for (i=0; i<10; i++){									//가장 많의 입력한 빈도수를 저장하는 for문 
		if(numbercount[i] > maxcount){
			max = i;										//max에 현재의 숫자 저장 
			maxcount = numbercount[i]; 						//numbercount에 현재의 빈도수 저장 
		}
	}
	printf("분석 결과, 가장 많은 빈도수는 %d이<가> %d 번 나타났다.\n", max, maxcount);		
	
	return 0;
	
}

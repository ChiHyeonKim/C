//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main(void){
//	int i, j, max=0, result;
//	int array[100]={0},freq[10]={0};
//
//	srand((unsigned)time(NULL));
//	
//	for(i=0; i<100; i++){
//		array[i] = rand()%10;
//
//		for(j=0; j<10; j++){
//			if(array[i] == j)
//				freq[j]++;
//		}	
//	}
//
//	for(j=0; j<10; j++){
//		printf("%d : %d\n", j, freq[j]);
//		if(freq[j]>max) {
//			max = freq[j];
//			result = j;
//		}
//	}
//
//	printf("%d\n",result);
//
//	return 0;
//
//}
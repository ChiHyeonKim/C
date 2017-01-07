//#include<stdio.h>
//#define SIZE 10
//
//int main(void){
//	int freq[SIZE] = {0};
//	int i, candidate;
//	while(1){
//		printf("몇 번 후보자를 선택하시겠습니까?(종료-1):");
//		scanf("%d", &candidate);
//
//		if(candidate<0) break;
//		freq[candidate-1]++;
//	}
//
//	printf("값 득표결과\n");
//
//	for(i=0; i<SIZE; i++)
//		printf("%3d %3d\n", i+1, freq[i]);
//
//	return 0;
//
//}
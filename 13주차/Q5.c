//#include<stdio.h>
//
//int main(void){
//	int i,j;
//	int a[3][5] = {{12, 56, 32, 16, 98},{99, 56, 34, 41, 3},{65, 3, 87, 78, 21}} ;
//	int sum1[3]={0}, sum2[5]={0}; //행의 합 저장 배열, 열의 합 저장 배열
//
//	for(i=0; i<3; i++){
//		for(j=0; j<5; j++){
//			if(i==0)
//				sum1[i]+=a[0][j] ; 
//			if(i==1)
//				sum1[i]+=a[1][j];
//			if(i==2)
//				sum1[i]+=a[2][j];
//			if(j==0)
//				sum2[j]+=a[i][0];
//			if(j==1)
//				sum2[j]+=a[i][1];
//			if(j==2)
//				sum2[j]+=a[i][2];
//			if(j==3)
//				sum2[j]+=a[i][3];
//			if(j==4)
//				sum2[j]+=a[i][4];
//		}
//	}
//
//	for(i=0; i<3;i++)
//		printf("%d행의 합계: %d\n", i+1, sum1[i]); 
//
//	for(i=0; i<5; i++)
//		printf("%d열의 합계: %d\n", i+1, sum2[i]);
//
//	return 0;
//
//}
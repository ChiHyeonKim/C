#include<stdio.h>

int main(void)
{
	int count=0, sum=0, num[count], i, j, max, maxcount=0;	//count = �Է� �޴� ������ ������ ����, sum = �� ���� ����, num[count] = �� ������ ������ ����, i,j = for�� ����, max = ���� ���� �� ���� ��Ÿ���� ����, maxcount = ������ Ƚ��   
	int numbercount[10] = {0};	//�迭 ������ ��Ƚ���� �����ϴ� �迭 
	
	printf("��� ������ �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &count);
	printf("0���� 9������ ������ %d�� �Է����ּ���\n",count);
	
	for(i=0; i<count; i++){				//�Է��ϰ� ���� ������ ������ŭ �Է¹޴� for�� 
		printf("%d��° �� : ", i+1);
		scanf("%d", &num[count]);		//�Է¹��� ������ num ������ ���� 
		sum += num[count];				//sum ������ ���� ���� 
		
		for(j=0; j<10; j++){			
			if(num[count] == j){		//�Է� Ƚ���� �����ϴ� for��  
			numbercount[j]++;			//�Է¹��� ������ �Է� Ƚ���� numbercount�� ���� 
			}
		}
	}
	
	printf("\n************\n");
	printf("   ���\n");
	printf("************\n");
	
	printf("�迭 ������ ���� %d�̰� �迭 ������ ��ü ���� %d �̹Ƿ� ����� %.2lf�̴�.\n\n", count, sum, (double)sum/count );
	
	printf("************\n");
	printf("   ����\n");
	printf("************\n");
	printf("---------------------------------------------------\n");
	printf("     ��     Ƚ��     ������׷�\n");	
	printf("---------------------------------------------------\n");
	
	for(i=0; i<10; i++){									//��� ����� ���� for ��  
		printf("%6d%7d        ",i, numbercount[i]);
		
		for(j=0; j<numbercount[i]; j++){					//�Է¹��� Ƚ����ŭ *�� �׸��� ���� for��  
			printf("*");
		}
		printf("\n");
	}
	
	printf("---------------------------------------------------\n");
	
	for (i=0; i<10; i++){									//���� ���� �Է��� �󵵼��� �����ϴ� for�� 
		if(numbercount[i] > maxcount){
			max = i;										//max�� ������ ���� ���� 
			maxcount = numbercount[i]; 						//numbercount�� ������ �󵵼� ���� 
		}
	}
	printf("�м� ���, ���� ���� �󵵼��� %d��<��> %d �� ��Ÿ����.\n", max, maxcount);		
	
	return 0;
	
}

//#include<stdio.h>
//
//static int amount = 0, sum = 0;
//
//void save(int amount);
//void draw(int amount);
//
//int main(void)
//{
//	int menu;
//
//	while (1) {
//		printf("메뉴를 선택하세요: 저축<1>, 인출<2>, 종료<3>:");
//		scanf("%d", &menu);
//
//		switch (menu) {
//		case 1:
//			printf("저축할 금액:");
//			scanf("%d", &amount);
//			save(amount);
//			break;
//		case 2:
//			printf("인출할 금액:");
//			scanf("%d", &amount);
//			draw(amount);
//			break;
//		case 3:
//			exit(1);
//			break;
//		}
//	}
//	return 0;
//}
//
//void save(int amount) {
//	sum += amount;
//	printf("현재 잔액은 %d입니다.\n", sum);
//}
//
//void draw(int amount) {
//	sum -= amount;
//	printf("현재 잔액은 %d입니다.\n", sum);
//}
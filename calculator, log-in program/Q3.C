//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//static int one = 0;
//static int two = 0;
//static int three = 0;
//static int four = 0;
//static int five = 0;
//static int six = 0;
//
//void get_dice_face();
//
//int main(void)
//{
//	int i;
//	printf("주사위 면:   <1> <2> <3> <4> <5> <6>\n");
//
//	srand((unsigned)time(NULL));
//
//	for (i = 1; i <= 1000; i++) {
//		get_dice_face();
//		
//		if (i % 100 == 0) {
//			printf("%4d 번째 : %3d %3d %3d %3d %3d %3d\n", i, one, two, three, four, five, six);
//		}
//	}
//
//	return 0;
//}
//
//void get_dice_face() {
//	switch ((rand()%6)+1 ) {
//	case 1:
//		one++;
//		break;
//	case 2:
//		two++;
//		break;
//	case 3:
//		three++;
//		break;
//	case 4:
//		four++;
//		break;
//	case 5:
//		five++;
//		break;
//	case 6:
//		six++;
//		break;
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//int main() {
//	int a = 0;
//	int count = 0;
//	int sum = 0;
//	
//	while (count < 3 && a != -1) {
//		printf("입력: ");
//		scanf("%d", &a);
//		if (a >= 0 && a <= 100) {
//			sum += a;
//			count++;
//		}
//		else if (a != -1) {
//			printf("잘못된 입력입니다. 0~100 사이의 값을 입력하세요.\n");
//
//		}
//	}
//	if (count == 0) {
//		printf("입력된 점수가 없습니다.\n");
//	}
//	else {
//		printf("유효한 점수 개수: %d개\n", count);
//		printf("평균: %.2f\n", (double)sum / count);  
//	}
//
//	return 0;
//}
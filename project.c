//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//    int year;
//    scanf("%d", &year);
//
//    // 윤년 조건: 4로 나누어떨어지고(year % 4 == 0), 100으로 나누어떨어지지 않거나(year % 100 != 0), 400으로 나누어떨어짐(year % 400 == 0)
//    int is_leap = (year % 4 == 0) * (year % 100 != 0) + (year % 400 == 0);
//
//    printf("%d\n", is_leap);
//
//    return 0;
//}
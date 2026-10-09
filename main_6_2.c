#include <stdio.h>
int is_leap_year(int year) {
	int is_leap = 0;
	if (year % 4 == 0) {
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				is_leap = 1;
			}
		}
		else
		{
			is_leap = 1;
		}
	}
	return is_leap;
}
void exerc() {
	int month;
	int days;
	printf("월 입력(1~12): ");
	scanf_s("%d", &month);
	if (month >= 1 && month <= 12) {
		int year;
		switch (month) {
			case 2:
				printf("input year: ");
				scanf_s("%d", &year);
				if (is_leap_year(year)==1) {
					days = 29;
				}
				else {
					days = 28;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30;
				break;
			default:
				days = 31;
				break;
		}
		printf("%d월은 %d일까지 있습니다.\n", month, days);
	}
	else
	{
		printf("1부터 12까지의 숫자를 입력해주세요.\n");
	}
	}
int main() {
	exerc();
	return 0;
}
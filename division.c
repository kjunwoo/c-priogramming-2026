#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc2(void) {
	int a, b;
	printf("input a, b: ");
	scanf("%d %d", &a, &b);

	if (b == 0) {
		printf("0으로 나눌 수 없습니다.\n");
		return;
	}
	printf("%d / %d = 몫: %d, 나머지: %d\n", a, b, a / b, a % b);
	printf("실수 나눗셈 결과: %lf\n", (double)a / b);
}

int main(void) {
	exerc2();
	return 0;
}
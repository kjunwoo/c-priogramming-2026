#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int amount;
	scanf("%d", &amount);
	int won10000 = amount / 10000;
	amount %= 10000;
	int won1000 = amount / 1000;
	amount %= 1000;
	int won100 = amount / 100;
	amount %= 100;
	int won10 = amount / 10;

	printf("10000:%d 1000:%d 100:%d 10:%d", won10000, won1000, won100, won10);
	return 0;
}

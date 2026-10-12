#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	int i, j;

	while (n < 1 || n > 9) {
		printf("1~9 사이의 정수를 입력하세요: ");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j <= n; j++) {
			if ( i == 0 ||  i == n-1 || j == 0 || j == n-1 ) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
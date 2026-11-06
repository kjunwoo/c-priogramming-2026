#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
	int number[SIZE];
	int most;
	int temp;
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand() % 100) + 1;
	}
	for (int i = 0; i < SIZE - 1; i++) {
		most = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (number[j] > number[most]) {
				most = j;
			}
		}
		temp = number[i];
		number[i] = number[most];
		number[most] = temp;
	}
	for (int i = 0; i < SIZE; i++) {
		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%3d ", number[i]);
	}
	return 0;
}
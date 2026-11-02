#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

int main() {
	int number[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		number[i] = rand() % 101;
	}
	for (int i = 0; i < SIZE; i++){
		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%3d ", number[i]);
	}
	int max = number[0];
	int min = number[0];
	int sum = 0;
	double average;

	for (int i = 0; i < SIZE; i++) {
		if (number[i] > max) {
			max = number[i];
		}
		if (number[i] < min) {
			min = number[i];
		}
		sum += number[i];
	}
	average = (double)sum / SIZE;
	printf("\nMaximum: %d\nMinimum: %d\nAverage: %.2f\n", max, min, average);
	return 0;
}
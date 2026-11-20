#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void selectionSort(int* arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}
void inputRandeomArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100);
	}
}
void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d\t ", arr[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}
}
int main() {
	int number[SIZE];

	srand(time(NULL));
	inputRandeomArray(number, SIZE);
	selectionSort(number, SIZE);
	printArray(number, SIZE);
	

	return 0;
}
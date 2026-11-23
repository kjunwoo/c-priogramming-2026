#include <stdio.h>
#include <stdlib.h>



void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 1000;
	}
}
void copyArray(int arr1[], int arr2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}
}

void initArray(int arr[], int size,int initVal)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = initVal;
	}
}
void dec_to_bin(int* bin,int dec,int size)
{
	int mod;
	initArray(bin, size, 0);
	size--;
	while (dec != 0) {
		mod = dec % 2;
		bin[size] = mod;
		size--;
		dec = dec / 2;
		if (size < 0)
		{
			printf("array is full\n");
			break;
		}
	}

}
void diceTest(int* dice, int count)
{
	int number;
	for (int i = 0; i < count; i++)
	{
		number = rand() % 6;
		dice[number]++;
	}
}
int checkArray(int* arr, int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			return 1;
		}
	}
	return 0;
}
void lottoGame(int* lotto, int size)
{
	int number;
	int flag;
	for (int i = 0; i < size; i++)
	{
		number = (rand() % 45) + 1;
		flag = checkArray(lotto, i-1, number);
		if (flag == 1)
		{
			i--;
		}
		else
		{
			lotto[i] = number;
		}
		
	}
}
int maxFindArray(int arr[], int size) {
	int max = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[max] < *(arr + i)) {
			max = i;
		}
	}
	return max;
}
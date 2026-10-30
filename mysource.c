#include <stdio.h>
double power(double n, int r) {


}
int factorial(int n) {
	int result;
	result = 1;
	if (n == 1) return 1;
	else
	{
		result = factorial(n - 1);
		return n * result;
	}
}
int fibonacci(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int conbination(int n, int r) {

}
void printStar(int line) {
	for (int i = 0; i < line; i++) {
		int star_count = i * 2 + 1;
		int space_count = line - i - 1;

		for (int k = 0; k < space_count; k++) {
			printf(" ");
		}
		for (int j = 0; j < star_count; j++) {
			printf("*");
		}
		printf("\n");
	}
}
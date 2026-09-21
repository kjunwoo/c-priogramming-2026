#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    double height, weight, bmi;

    scanf("%lf %lf", &height, &weight);

    bmi = weight / (height * height);

   
    printf("bmi=%.2f\n", bmi);

    return 0;
}
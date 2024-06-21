// Program to create a function which take 3 arguments and return its average.

#include <stdio.h>

float average(float a, float b, float c)
{
    float sum = a + b + c;
    float avg = sum / 3;
    return avg;
}

int main()
{
    float num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("%.2f", average(num1, num2, num3));

    return 0;
}
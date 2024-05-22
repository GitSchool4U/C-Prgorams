// subtract two values in which 1st value is of integer type and the value which is goint to be subtract is of float type, calculate its result in float type.
#include <stdio.h>

int main()
{
    int num1;
    float num2, difference;

    // Input two integers
    printf("Enter first integer type value: ");
    scanf("%d", &num1);
    printf("Enter second float type value: ");
    scanf("%f", &num2);

    // Subtraction
    difference = num1 - num2;

    // Output the result
    printf("Difference: %.2f\n", difference);

    return 0;
}

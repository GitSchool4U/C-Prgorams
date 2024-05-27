// Basic Program to find quotient and remainder
#include <stdio.h>

int main()
{
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("quotient: %d, remainder: %d\n", quotient, remainder);

    return 0;
}
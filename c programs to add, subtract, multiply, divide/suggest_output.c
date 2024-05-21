// Give Anwers of all outputs given below
#include <stdio.h>

int main()
{
    int num1;
    float num2;
    int intResult;
    float floatResult;

    // Input two integers
    printf("Enter first integer type value: ");
    scanf("%d", &num1);
    printf("Enter second float type value: ");
    scanf("%f", &num2);

    // Multiplication
    intResult = num1 * num2;

    printf("Output-1 : %d\n", intResult);
    printf("Output-2 : %f\n", intResult);

    floatResult = num1 * num2;

    printf("Output-3 : %f\n", floatResult);
    printf("Output-4 : %d\n", floatResult);

    intResult = intResult * num1;

    printf("Output-5 : %d\n", intResult);
    printf("Output-6 : %.3f\n", intResult);

    floatResult = floatResult * intResult;

    printf("Output-7 : %.2f\n", floatResult);
    printf("Output-8 : %d\n", floatResult);

    return 0;
}

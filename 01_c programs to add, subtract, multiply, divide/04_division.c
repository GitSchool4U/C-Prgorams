// handle the special case of division and show error if occurs.
#include <stdio.h>

int main()
{
    int num1, num2;
    float quotient;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the divisor is zero
    if (num2 != 0)
    {
        // Division
        quotient = (float)num1 / num2;

        // Output the result
        printf("Quotient: %.2f\n", quotient);
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

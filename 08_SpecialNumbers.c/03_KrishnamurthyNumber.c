// Program to take a number from user and check whether it is Krishnamurthy number or not .
// It is a number that is equal to the sum of the factorial of all its digits.
// E.g., 145 = 1! + 5! + 5! = 145

#include <stdio.h>

int main()
{
    int num, numcpy, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    numcpy = num;

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
    }

    if (numcpy == sum)
    {
        printf("Krishnamurthy number");
    }
    else
    {
        printf("Not a krishnamurthy number");
    }

    return 0;
}
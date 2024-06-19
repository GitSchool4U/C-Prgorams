// Program to check whether the number entered by the user is adom number or not.
// A number is adom if square of that number is reverse number of square of its reverse number
// E.g., square of 13 = 169 & square of 31 = 961 therefore 169, 961 are reverse of each other, so 13 is an adom number

#include <stdio.h>

int main()
{
    int num, numSq, revNum = 0, revNumSq, revOfRevNumSq = 0, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    numSq = num * num;

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        revNum = revNum * 10 + digit;
    }

    revNumSq = revNum * revNum;

    while (revNumSq != 0)
    {
        digit = revNumSq % 10;
        revNumSq = revNumSq / 10;
        revOfRevNumSq = revOfRevNumSq * 10 + digit;
    }

    if (numSq == revOfRevNumSq)
    {
        printf("Adom Number");
    }
    else
    {
        printf("Not Adom Number");
    }

    return 0;
}
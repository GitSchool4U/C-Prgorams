// Program to take a number from user and check whether it is Armstrong number or not .
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, numcpy, digit, sum = 0;

    printf("Enter number : ");
    scanf("%d", &num);

    numcpy = num;

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + pow(digit, 3);
    }
    if (sum == numcpy)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }

    return 0;
}
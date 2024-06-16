// Program to check whether the number is neon number or not.
// A neon number is a number where the sum of digits of square of the number is equal to the number.
// For example if the input number is 9, its square is 9*9 = 81 and sum of the digits is 9.

#include <stdio.h>

void main()
{
    int num, numcpy, sq, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    numcpy = num;
    sq = num * num;

    for (num = sq; num > 0; num = num / 10)
        sum = sum + num % 10;

    if (sum == numcpy)
        printf("%d is a neon number.", numcpy);
    else
        printf("%d is not a neon number.", numcpy);
}
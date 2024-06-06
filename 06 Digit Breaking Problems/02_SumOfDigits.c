// Program to take 4 digits number from user and calculate sum of digits

#include <stdio.h>

int main()
{
    int num, a, b, c, d, sum;
    printf("Enter 4 digit numbers : ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999)
    {
        printf("Sorry!, Invalid number...Please Try Again!");
        return 0;
    }

    a = num % 10;
    num = num / 10;

    b = num % 10;
    num = num / 10;

    c = num % 10;
    num = num / 10;

    d = num % 10;

    sum = a + b + c + d;
    printf("Sum of digits : %d", sum);

    return 0;
}

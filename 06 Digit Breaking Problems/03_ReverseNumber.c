// Program to take 4 digits number from user and print its reverse

#include <stdio.h>

int main()
{
    int num, a, b, c, d, rNum=0;
    printf("Enter 4 digit numbers : ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999)
    {
        printf("Sorry!, Invalid number...Please Try Again!");
        return 0;
    }

    a = num % 10;
    num = num / 10;
    rNum = rNum*10 + a;

    b = num % 10;
    num = num / 10;
    rNum = rNum*10 + b;

    c = num % 10;
    num = num / 10;
    rNum = rNum*10 + c;

    d = num % 10;
    rNum = rNum*10 + d;

    printf("Sum of digits : %d", rNum);

    return 0;
}

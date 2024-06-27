// Program to reverse any number

#include <stdio.h>

int main()
{
    int num, digit, reverseNum = 0;
    printf("Enter any numbers : ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        reverseNum = reverseNum * 10 + digit;
    }

    printf("Reverse number is : %d", reverseNum);

    return 0;
}

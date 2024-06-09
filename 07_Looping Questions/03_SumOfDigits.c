// Program to calculate sum of digits of any number

#include <stdio.h>

int main()
{
    int num, digit, sum=0;
    printf("Enter any number : ");
    scanf("%d", &num);

    while(num != 0){
        digit = num%10;
        num = num/10;
        sum += digit;
    }

    printf("Sum of digits : %d", sum);

    return 0;
}

// write a program to check whether person is eligible to vote or not
// consider, person can vote if his/her age is greater than or equals 18.
// also handle invalid age

#include <stdio.h>

int main()
{
    int num;

    printf("Enter your age : ");
    scanf("%d", &num);

    if (num < 0 || num > 150)
    {
        printf("invalid age");
    }
    else
    {
        if (num < 18)
        {
            printf("OOPS!...You Cannot Eligible For Vote.");
        }
        else
        {
            printf("Congratulations!,....You Can Vote.");
        }
    }

    return 0;
}
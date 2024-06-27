// Write a program in C to add two numbers using pointers

#include <stdio.h>

int main()
{
    int fno, sno, *ptr, *qtr, sum;

    printf(" Input the first number : ");
    scanf("%d", &fno);

    printf(" Input the second number : ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    sum = *ptr + *qtr;
    printf(" The sum of the entered numbers is : %d\n\n", sum);

    return 0;
}

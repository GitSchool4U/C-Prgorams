// Program to check the leap year.
// A year is a leap year if one of the following conditions is satisfied:
// The Year is divisible by 400.
// The Year is divisible by 4 but not by 100.

// m-1*******************************************
#include <stdio.h>

void main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("\n%d is a leap year.", year);
    else if (year % 100 == 0)
        printf("\n%d is not a leap year.", year);
    else if (year % 4 == 0)
        printf("\n%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);
}

// m-2*************************************
#include <stdio.h>

int main()
{
    int year;

    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

// Self Work ---> Write a Program to create menu and give choice to user to select and perform task on the basis of user selection
// menu are as follows:
// check even or odd
// find largest of three numbers
// check leap year


#include <stdio.h>

int main()
{
    int choice;
    printf("Menu:\n");
    printf("1. Check even or odd\n");
    printf("2. Find largest of three numbers\n");
    printf("3. Check leap year\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("%d is even.\n", number);
        }
        else
        {
            printf("%d is odd.\n", number);
        }
        break;
    }
    case 2:
    {
        int num1, num2, num3;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1 >= num2 && num1 >= num3)
        {
            printf("%d is the largest.\n", num1);
        }
        else if (num2 >= num1 && num2 >= num3)
        {
            printf("%d is the largest.\n", num2);
        }
        else
        {
            printf("%d is the largest.\n", num3);
        }
        break;
    }
    case 3:
    {
        int year;
        printf("Enter a year: ");
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d is a leap year.\n", year);
        }
        else
        {
            printf("%d is not a leap year.\n", year);
        }
        break;
    }
    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}

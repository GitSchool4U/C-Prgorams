// C program to take three numbers from user, and find largest in all three.

#include <stdio.h>

int main()
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
    return 0;
}

// Self Work ---> short the above code using ternary operator.
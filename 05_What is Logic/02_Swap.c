// Write a program to swap two numbers using a temporary variable.

#include <stdio.h>

int main()
{
    int a, b, t;
    printf("Enter two values : ");
    scanf("%d %d", &a, &b);

    // print before swapping
    printf("Before Swap : a = %d & b = %d\n", a, b);

    // code below is for swapping;
    t = a;
    a = b;
    b = t;

    printf("After Swapping : a = %d & b = %d", a, b);

    return 0;
}

// write a program to swap two numbers without the using of third variable.

#include <stdio.h>
int main()
{
    // declaration
    int a, b;

    // input from user
    printf("Enter two values : ");
    scanf("%d %d", &a, &b);

    // print before swapping
    printf("Before Swap : a = %d & b = %d\n", a, b);

    // code below for swappping two numbers without the using of third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping : a = %d & b = %d", a, b);

    return 0;
}
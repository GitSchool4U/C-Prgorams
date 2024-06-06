// suggest output

#include <stdio.h>

int main()
{
    int x = 32, sum;
    int a, b;

    a = x / 10;
    x = x % 10;

    b = x / 10;
    x = x % 10;

    sum = a + b;
    printf("Sum = %d", sum);

    return 0;
}
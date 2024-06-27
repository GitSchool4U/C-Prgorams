// suggest output

#include <stdio.h>

int main()
{
    int x = 20, i;

    for (int i = 0; i <= 3; i++)
    {
        i = i + 10;
    }

    x = x + i;
    printf("x = %d", x);
}
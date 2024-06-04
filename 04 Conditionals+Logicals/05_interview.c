// Suggest Output

#include <stdio.h>

int main()
{
    int x = 10, y = 15, z = 30;
    int result;

    if (x > y && y < z)
    {
        result = x + y;
    }
    else if (y < x || y > z)
    {
        result = y - z;
    }
    else if (y == z || x < y && z > y)
    {
        result = x - y * x % z;
    }
    else
    {
        result = x * z;
    }

    printf("Resultant : %d\n", result);

    return 0;
}

// Program to print ASCII table.

#include <stdio.h>
int main()
{
    int code;
    for (code = 0; code <= 255; code++)
    {
        printf("%3d - %c\n", code, code);
    }
    return 0;
}

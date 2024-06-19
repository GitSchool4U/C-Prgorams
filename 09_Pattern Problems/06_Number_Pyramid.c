/*

    Number Pyramid Pattern

        1
       121
      12321
     1234321
    123454321

*/

#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (int k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}

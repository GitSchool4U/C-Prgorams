/*

    Simple Star Pattern using goto statement:

    *****
    *****
    *****
    *****
    *****

 */

#include <stdio.h>

int main()
{
    int rows = 5;
    int i = 1, j = 1;

START_ROW:
    if (i > rows)
    {
        goto END; // End the program if all rows are printed
    }
    j = 1;

START_COLUMN:
    if (j > i)
    {
        printf("\n");
        i++;
        goto START_ROW; // Move to the next row
    }
    printf("*");
    j++;
    goto START_COLUMN; // Print next column in the same row

END:
    return 0;
}

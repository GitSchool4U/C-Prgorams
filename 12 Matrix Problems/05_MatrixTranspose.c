// Program to find transpose of matrix.

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("kitne rows ar columns chahiye matrix me: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], transpose[cols][rows];

    printf("matrix me elements daliye:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // transpose karne ka logic 👇
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose ho chuka... result kuch is prakar hai:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

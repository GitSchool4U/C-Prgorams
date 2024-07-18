// C Program to create a matrix according to user specified parameters.

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Kitna row chahiye: ");
    scanf("%d", &rows);
    printf("Kitna Column Chahiye: ");
    scanf("%d", &cols);

    // Declare the matrix
    int matrix[rows][cols];

    printf("Kripya matrix ke sare element dalen:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d\t", &matrix[i][j]);
        }
    }

    printf("Apka matrix kuch is prakar hai:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

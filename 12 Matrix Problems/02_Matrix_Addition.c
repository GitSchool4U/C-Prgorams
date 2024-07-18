// Program to add two matrix.

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("kitna row ar column chahiye: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    printf("pahle matrix ka element daliye:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("dusre matrix ka element daliye:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Apka pehla matrix kuch is prakar hai:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Apka dusra matrix kuch is prakar hai:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // ye hai sum karne ka logic👇
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("apka sum ho chuka hai... sum wala matrix kuch is prakar hai:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

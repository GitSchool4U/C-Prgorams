// Program to find multiplication of two matrices.

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("pahle matrix me kitna row ar kitna column chahiye: ");
    scanf("%d %d", &r1, &c1);
    printf("dusre matrix me kitna row ar kitna column chahiye: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    printf("pahle matrix me elements daliye:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("dusre matrix me elements daliye:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // multiply karne ka logic 👇
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("multiply ho chuka... multiply ke baad ye result aaya:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

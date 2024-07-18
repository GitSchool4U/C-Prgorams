// Program to find determinant of 2*2 matrix.

#include <stdio.h>

int main()
{
    int matrix[2][2];

    printf("2*2 matrix ke elements dalen:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    printf("Determinant of the 2x2 matrix: %d\n", determinant);

    return 0;
}

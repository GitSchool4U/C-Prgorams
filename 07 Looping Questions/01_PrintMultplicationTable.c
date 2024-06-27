// program to take number from user and print its multiplication table in the foramt of 2*1 = 2

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

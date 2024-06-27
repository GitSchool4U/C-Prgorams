// program to calculate sum of natural numbers from m to n, where m and n entered by the user.

#include <stdio.h>

int main()
{
    int m, n, sum = 0;

    printf("Enter range (m,n): ");
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}
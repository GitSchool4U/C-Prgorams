// Program to calculates a new array where each element is the sum of the corresponding elements from two input arrays.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sumArr[n];

    // Reading elements of the first array
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Reading elements of the second array
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Calculating the sum of corresponding elements
    for (i = 0; i < n; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
    }

    // Printing the resulting sum array
    printf("The resulting array with the sum of corresponding elements is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", sumArr[i]);
    }
    printf("\n");

    return 0;
}

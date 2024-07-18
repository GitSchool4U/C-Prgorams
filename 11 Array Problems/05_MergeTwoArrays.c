// SELF-WORK :  Program to merge two arrays.

#include <stdio.h>

int main()
{
    int n1, n2, i;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int n3 = n1 + n2;
    int arr3[n3];

    for (i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

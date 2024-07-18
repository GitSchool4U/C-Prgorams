// Program to calculates a new array where each element is the sum of the corresponding elements from two input arrays.

#include <stdio.h>

int main()
{
    int n;

    printf("Apko array ka size kitna chahiye \n");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    int arr3[n];

    printf("Krpya pahle array me numbers daliye:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Krpya dusre array me numbers daliye:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Ye rhe apke dono arrays:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr2[i]);
    }

    // 2 array ko sum karne ka logic👇
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("\nye rha apka sum kiya hua array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", arr3[i]);
    }

    return 0;
}
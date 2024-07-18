// program to find minimum and maximum element of an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Apko kitne size ka array chahiye? \n");
    scanf("%d", &n);

    int arr[n];

    printf("Krpya apne numbers ko yha daliye:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Ye rhe apke numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    // min and maximum find karne ka logic👇
    int min, max;
    min = max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("\nmax = %d", max);
    printf("\nmin = %d", min);

    return 0;
}
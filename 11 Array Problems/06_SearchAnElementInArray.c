// Program to search given element in array

#include <stdio.h>

int main()
{
    int n, searchNumber;

    printf("apko kitne number me search karna hai \n");
    scanf("%d", &n);

    int arr[n];

    printf("Krpya apne numbers ko yha daliye:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nkonsa number apko search karna hai: ");
    scanf("%d", &searchNumber);

    printf("\nYe rhe apke numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    // search karne ka logic👇
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchNumber)
        {
            found = 1;
            printf("\n%d is found at index %d", searchNumber, i);
        }
    }

    if (found != 1)
    {
        printf("\n%d is not found", searchNumber);
    }

    return 0;
}
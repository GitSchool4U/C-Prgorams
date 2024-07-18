// Program to calculate sum and average of n numbers where n is entered by user.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    float avg;

    printf("Apko kitne number ka sum and average karana hai? \n");
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

    // sum karne ka logic👇
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    avg = sum / n;

    printf("\nSum : %d", sum);
    printf("\nAverage: %.2f", avg);

    return 0;
}
// Program to calculate sum and average of n numbers where n is entered by user.

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0, average;

    printf("How many numbers do you want to use to calculate the average? \n");
    scanf("%d", &n);

    int arr[n];

    // Reading elements of the array
    printf("Enter numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sum of elements of array
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    average = sum / n;
    printf("Sum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}

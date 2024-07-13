// Program to calculate sum and average of n numbers where n is entered by user.

#include <stdio.h>

int main()
{
    int n;
    float sum = 0, average;

    printf("Kitne numbers ka sum aur average nikalna hai? \n");
    scanf("%d", &n);

    float arr[n];

    // Reading elements of the array
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    // Print array
    printf("Your given numbers are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t", arr[i]);
    }

    // sum of elements of array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    average = sum / n;
    printf("\nSum of array elements: %.2f", sum);
    printf("\nAverage of array elements: %.2f", average);

    return 0;
}

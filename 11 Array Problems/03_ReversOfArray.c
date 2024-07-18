// program to reverse an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Apko kitne number ka array chahiye? \n");
    scanf("%d", &n);

    int arr[n];
    int revArr[n];

    printf("Krpya apne numbers ko yha daliye:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Ye rha apka original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    // // peeche se iterate
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     revArr[n - 1 - i] = arr[i];
    // }

    // // aage se iterate
    // for (int i = 0; i <n; i++)
    // {
    //     revArr[i] = arr[n - 1 - i];
    // }

    // single array me bhi kam ho skta hai
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nye rha apka reverse array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }

    return 0;
}

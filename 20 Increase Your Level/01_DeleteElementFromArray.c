// Program to delete element from the given position

#include <stdio.h>

int main()
{
    int n, pos, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    // Deleting the element at the specified position
    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;

    // Print the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

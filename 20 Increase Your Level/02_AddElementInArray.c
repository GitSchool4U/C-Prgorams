// Program to add given element on given position
#include <stdio.h>

int main()
{
    int n, pos, newElement, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare an array with one extra element for the new element

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the position to add the new element
    printf("Enter the position to add the new element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
        return 1;
    }

    // Input the new element
    printf("Enter the new element to add: ");
    scanf("%d", &newElement);

    // Shift elements to the right to make space for the new element
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Add the new element at the specified position
    arr[pos - 1] = newElement;

    // Increase the size of the array
    n++;

    // Print the updated array
    printf("Array after adding the new element:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

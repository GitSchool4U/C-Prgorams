// c program to print even numbers from 1 to 10 which shows the use of continue statement

#include <stdio.h>

int main()
{
    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Check if the number is even
        if (i % 2 != 0)
        {
            // Skip the rest of the code in this loop iteration for even numbers
            continue;
        }
        // Print the odd number
        printf("%d\n", i);
    }

    return 0;
}

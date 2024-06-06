// C program to find cube of an integer number using two different methods

// 1st method : Without using pow() function ******************************************
#include <stdio.h>

int main()
{

    int a, cube;

    printf("Enter any integer number: ");
    scanf("%d", &a);
    // calculating cube
    cube = (a * a * a);
    printf("CUBE is: %d\n", cube);

    return 0;
}

// // second method : using pow() function *********************************************
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a, cube;

//     printf("Enter any integer number: ");
//     scanf("%d", &a);
//     // calculating cube
//     cube = pow(a, 3);
//     printf("CUBE is: %d\n", cube);

//     return 0;
// }

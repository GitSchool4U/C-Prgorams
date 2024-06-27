
// C program to demonstrate pointer to pointer
#include <stdio.h>
 
int main()
{
    int var = 789;
 
    int* ptr2;
 
    int** ptr1;
 
    ptr2 = &var;
 
    ptr1 = &ptr2;
 
    printf("Value of var = %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr2);
    printf("Value of var using double pointer = %d\n", **ptr1);
 
    return 0;
}
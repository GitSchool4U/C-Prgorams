//Write a program in C to print all the alphabets using pointer.

#include <stdio.h>

int main() {

    char alph[27]; 
    int x;
    char *ptr;   

    ptr = alph; 
            printf(" %c ", ptr);
 
    for (x = 0; x < 26; x++) {
        *ptr = x + 'A'; 
        ptr++; 
    }

    ptr = alph; 
        printf(" %c ", ptr);
   
    printf(" The Alphabets are : \n");
    for (x = 0; x < 26; x++) {
        printf(" %c ", *ptr);  
        ptr++;  
    }
  
    return 0;
}
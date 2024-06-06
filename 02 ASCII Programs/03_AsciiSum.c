// take two character values from user and print sum of those characters

#include <stdio.h>

int main(){
    char c1,c2;
    char result;

    printf("Enter 1st character : ");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Enter 2nd character : ");
    scanf("%c",&c2);

    result = c1 - c2;
    printf("your result is : %c",result);

}
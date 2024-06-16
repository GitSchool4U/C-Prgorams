// program to check whether a given number is palindrome number or not
// palindrome numbers are those which remain the same whether written forwards or backwards.
// E.g., 123321, 5678765

#include <stdio.h>

int main(){
    int num,digit,revNum = 0;

    printf("Enter number : ");
    scanf("%d",&num);

    int numcpy = num;

    while(num!=0){
        digit = num%10;
        num = num/10;
        revNum = revNum*10 + digit;
    }

    if(revNum == numcpy){
        printf("Entered Number is a palindrome number");
    }else{
        printf("Entered Number is not a palindrome number");
    }

    return 0;
}
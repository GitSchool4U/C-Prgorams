// take input from user until he/she not enter -1 and check whether number is even or odd
#include <stdio.h>
int main()
{
    int num;

    printf("If you want to exit program, Please enter \"-1\"\n");

    while (num != -1)
    {
        printf("Enter an integer number: ");
        scanf("%d", &num);

        // If number is divisible by 2 then number EVEN otherwise number is ODD

        if (num % 2 == 0)
            printf("%d is an EVEN number.\n", num);
        else
            printf("%d is an ODD number.\n", num);

        if (num == -1)
            printf("Yha Aane Ke Liye Dhanyawaad!, Dubara Awasya Ayiyega!");
    }

    return 0;
}

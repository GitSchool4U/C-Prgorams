// taek character from user until he/she not entered 0 and check wheter entered character is vowel or not.

#include <stdio.h>

int main()
{
    char ch;

    while (ch != '0')
    {
        printf("Enter a character: ");
        scanf("%c", &ch);

        fflush(stdin);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }

    printf("Thanks For Coming!");

    return 0;
}

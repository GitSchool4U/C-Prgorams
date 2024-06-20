// Suggest All Outputs

#include <stdio.h>

int main()
{
    int num = 10;
    char ch = 'A';

START:
    num += 5;
    ch = 'B';
    goto END;

    printf("OUTPUT-1--> Number: %d, Character: %c\n", num, ch);

END:
    num -= 3;
    ch = 'C';
    printf("OUTPUT-2--> Number = %d, Character = %c\n", num, ch);

    return 0;
}

// Program to demonstrate the use of goto statement.

#include <stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number (1-3): ");
    scanf("%d", &num);

    if (num == 1)
        goto ONE;
    else if (num == 2)
        goto TWO;
    else if (num == -1)
        goto Critical;
    else
        goto END;

BREAK:
    printf("We are closign this program.\n");
ONE:
    printf("You entered one.\n");
    goto END;
TWO:
    printf("You entered two.\n");
    goto END;
Critical:
    printf("Critical number encounters.\n");
    goto BREAK;
END:
    printf("End of program.\n");

    return 0;
}

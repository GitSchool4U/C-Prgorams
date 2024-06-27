// Suggest Ourtput

#include <stdio.h>

int main()
{
    int num = 33;

ALPHA:
    num = 44;
    goto END;

    printf("Output = %d", num);

END:
    return 0;
}
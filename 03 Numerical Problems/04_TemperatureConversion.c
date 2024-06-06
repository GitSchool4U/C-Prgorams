// C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float f, c;
    int choice;

    printf("If you want to Convert temperature from Fahrenheit to Celsius, Enter \"1\"\n");
    printf("If you want to Convert temperature from Celsius to Fahrenheit, Enter \"2\"\n");
    printf("Enter your choice (1, 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) / 1.8;
        printf("Temperature in Celsius: %.2f", c);
    }
    else if (choice == 2)
    {
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("Temperature in Fahrenheit: %.2f", f);
    }
    else
    {
        printf("\nInvalid Choice !!!");
    }
    return 0;
}

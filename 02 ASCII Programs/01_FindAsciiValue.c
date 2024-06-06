// program to print ascii value of any character entered by user.

#include <stdio.h>

int main()
{
	char ch;

	//input character
	printf("Enter the character: ");
	scanf("%c",&ch);

	printf("ASCII is = %d\n", ch);
	
	return 0;
}
#include <stdio.h>

/* Prints decimal as binary or hexadecimal. */

void binary(int x); // Binary function initialization.

int main() // Main function
{
	int number, selection;
	
	while(1)
	{
		printf("Please enter a number in the range 0-16: ");
		scanf("%d", &number);
		if(number>=0 && number<16)
		{
			printf("Please indicate your selection (1 for binary, 2 for decimal, 3 for hexadecimal): ");
			scanf("%i", &selection);
				
			switch(selection)
			{
				case 1: 
					printf("The number you entered as binary: ");
					binary(number);
					printf("\n\n");
					break;
				case 2:
					printf("The number you entered as decimal: %d", number);
					printf("\n\n");
					break;
				case 3:
					printf("The number you entered as hexadecimal: %X", number);
					printf("\n\n");
					break;
			}
		}
		else
			{
				printf("Invalid selection!");
				printf("\n\n");
			}
	}
	getchar();
	return 0;
}

void binary(int x)
{
	int i, quotient0, quotient1, quotient2, quotient3, array[4];
	
	quotient0 = x/2;
	array[3] = x%2;
	quotient1 = quotient0/2;
	array[2] = quotient0%2;
	quotient2 = quotient1/2;
	array[1] = quotient1%2;
	quotient3 = quotient2/2;
	array[0] = quotient2%2;
	
	for(i=0; i<4; i++)
		{
			printf("%d", array[i]);
		}
}

//Elthon Cisneros
//Room 3.c
//3/19/18


#include <stdio.h>
#include <stdlib.h>

int main (void)
{

	int input;
	printf("This is Room 3.\n ");
	printf ("You walk in and see 4 cards facing down on a table...\n");
	printf ("You may choose 1 card to determine your fate:\n");
	scanf ("%d", &input);

	switch (input)
	{
		case 1:
			printf("You die.\n");
			break;
		case 2:
			printf ("You survive.\n");
			break;
			// you may choose another card
		case 3:
			printf ("You got lucky. You may go to another room");
			break;
		case 4:
			printf ("You get another card");
			break;
		default:
			break;
	
	}
	return 0;
}

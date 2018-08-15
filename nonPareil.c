#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "head.h"

int main()
{
	
	int guess[13][4];
	char  correctness[13][4];
	int i,j,ch;
	for(i=0;i<12;i++)
	{
		for(j=0;j<4;j++)
			correctness[i][j]=('G');
	}
	
	printf("\n\n	*****  Deku: Let the Game begins!  ***** \n\n");
	printf("1. Play\n");
	printf("2. Instructions\n");
	printf("3. Exit\n\n\nEnter your choice: ");
	scanf("%d",&ch);
	
	while(1)
	{
		switch(ch)
		{
			case 1:
				StartGame(guess, correctness, 13, 4);
				break;
			case 2:
				Instructions();
				break;
			case 3:
				exit(0);
			default:
			{
				printf("\nSorry, Wrong Input! Please Try Again.");
				main();
			}
		}
	}
	return 0;
}




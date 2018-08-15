#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "head.h"


void WannaPlay()
{
	int choice;
	printf("\n\nIf you wanna play again, press 1 else press any key to exit . . ");
	scanf ("%d",&choice);	
	switch(choice)
	{
		case 1:
			main();
			break;
		default: 
		{
			printf("\n\n\nThanks for playing! Hope to see you soon!\n\n");
			exit(0);
		}
	}
}

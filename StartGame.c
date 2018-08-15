#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "head.h"


int StartGame(int Guess[13][4],char  Correctness[13][4], int Rows, int Columns)
{
	
	rando( Guess, Rows-1, Columns );
	
	int count=0, c=0, x, k, i, j, ch;
	printf("\n\nEnter 4 numbers between 1 to 6\n");
	while(count<13)
	{
		for(i=0;i<13;i++)
		{
			count++;
			
			for(j=0;j<4;j++)
			{
				scanf("%d", &Guess[i][j]);
			}
			for(x=0;x<4;x++)
				for(k=0;k<4;k++)
				{
					if(Guess[i][x]== Guess[12][k])
					{
						Correctness[i][x]=('W');
					}
				}

			for(x=0;x<4;x++)
			{
				if(Guess[i][x]== Guess[12][x])
				{
					Correctness[i][x]=('B');
				}
			}
				
			print_array(Guess,i);
			print_Sarray(Correctness,i);

			for(x=0;x<4;x++)
			{
				if(Correctness[i][x]=='B')
					c++;
			}

			if(c==4)
			{
				printf("\n\n***********  You Won  **********\n\n");
				WannaPlay();
			}
			else if(count==12)
			{
				printf("\n\n-_____________-  You lost  -____________-\n\n");
				WannaPlay();
			}
			else
			{
				c=0;
				printf("\nEnter numbers\n\n");
				continue;
			}
		}

	}
	
	printf("1-Main Menu");
	scanf("%d", &ch);
	while(ch!=1)
	{
	scanf("%d", &ch);
	}
	return 0;
}

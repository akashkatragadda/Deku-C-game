#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "head.h"

void print_array(int a[12][4],int row)
{
	int j;
	 	for(j=0;j<4;j++)
	 	{
	 		printf("%d",a[row][j]);
	 		printf(" ");
		 }
}



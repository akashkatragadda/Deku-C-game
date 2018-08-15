#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "head.h"




int rando(int x[13][4], int row, int col)
{
	srand((int)time(0));
	for(int i=0; i<col; i++)
			x[row][i] = rand() % 4 + 1;
	return 0;
}

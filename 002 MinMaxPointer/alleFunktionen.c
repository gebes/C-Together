#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "alleFunktionen.h"

// EX0011_MinMaxPointer

void minmax(int data[], int numbers, int *max, int *min)
{
	*max = data[0];
	*min = data[0];
	
	for(int i=0; i < numbers; i++)
	{
		if(data[i] > *max)
		{
			*max = data[i];
		}
		
		if(data[i] < *min)
		{
			*min = data[i];
		}
	}
}

int isSorted(int data[], int numbers)
{
	for(int i = 0; i < numbers - 1; i++)
	{
		if(data[i] > data[i + 1]) 
		{
			return 0;
		}
	}
	
	return 1;
}



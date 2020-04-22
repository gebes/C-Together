// Exa03_IQ_Evaluatios ================================================================================================================================================================================

#include<stdbool.h>
#include<stdio.h>
#include"function.h"

void outputExa03(int data[], int size, int min, int max, float average,int most,int counter, int zahl, int medsmaller,int medbigger, int median)
{
  printf("Liste der IQs: \n\n");
	// IQ-List
  for(int i = 0; i < size; i++)
  {	
	if(i == 9) printf("%d\n\n", data[i]);
	else if(i < size - 1) printf("%d - ", data[i]);
    else printf("%d", data[i]);
  }
  
	// Output Min und Max
  printf("\n\nMinimale IQ: %3d\n\n", min);	
  printf("Maximale IQ: %d\n\n", max);
	
	// Average
  printf("Durchschnittlicher IQ: %.2f\n", average);
  
  // < Average > Average
  printf("\nDie Anzahl der IQs mit Wert < %.2f betraegt: %d\n", average, medsmaller);
  printf("\nDie Anzahl der IQs mit Wert > %.2f betraegt: %d\n", average, medbigger);
  
  // mostCommonIQ 
  printf("\nDer haeufigste IQ ist %d und er kommt %d mal vor!\n", zahl, counter);
  
  // sortedList
  bubblesort(data,size);
  printf("\nSortierte Liste: \n ");
  for(int i = 0; i < size - 1; i++)
  {
	  printf("%d - ", data[i]);
  }
  printf("%d\n", data[size - 1]);

  // Median 
  
  printf("\nMedian: %d", median); 
}

void averageExa03(int data[], int size, float *average)
{
  int sum = 0;
  
  for(int i = 0; i < size; i++) 
  {
	sum += data[i];
  }
  *average = sum / size;
}

void biggerandsmallerthanIQ(int data[], int size, float average, int *medsmaller, int *medbigger)
{
	for(int i = 0; i < size; i++)
	{
		if(data[i] < average) *medsmaller+= 1;
		else if(data[i] > average) *medbigger+= 1;
	}
}

void mostCommonIQ(int data[], int size, int *most, int *counter, int *zahl)
{
  int counterarr[size];
  
  for(int i = 0; i < size; i++) counterarr[i] = 0;
  
  *counter = counterarr[0];
  
  for(int i = 0, x = 0; i < size; i++)
  {
	for(int j = i + 1; j < size - 1; j++)
	{
      if(data[i] == data[j]) counterarr[x]++;
	  if(counterarr[x] > *counter)  *counter = counterarr[x];
	}
  }
  
  /*
  printf("%d", *counter);
  
  int i = 0;
  bool numberFound = false;
  
  while(!numberFound)
  {
	for(int j = i + 1; j < size - 1; j++)
	{
      if(data[i] == data[j] && counterarr[j] == *counter) // 131,101,75,103,110,89,101,90,127,101,94,102,102
	  {
		 *zahl = data[i];
		 numberFound = true;
	  }
	}
	i++;
	printf("%d ", i);
  }
   */
}

void bubblesort(int data[], int size) 
{
  bool isSorted = false;
  int lastUnsorted = size - 1;
  while(!isSorted) 
  {
    isSorted = true;
    for(int i = 0; i < lastUnsorted; i++) 
	{
      if(data[i] > data[i + 1]) 
	  {
        swap(data, i, i+1);
        isSorted = false;
      }
    }
    lastUnsorted--;
  }
 
}
	
void swap(int data[], int i, int i1) 
{
  int temp = data[i];
  data[i] = data[i1];
  data[i1] = temp;
}

void medianFunction(int data[], int size, int *median)
{
  int indexZero = 0;
  int lastIndex = size; 
  int placeholder = (indexZero+lastIndex) / size;
  *median = data[placeholder];
}
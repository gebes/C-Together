#include <stdio.h>
#include "../Funktionen/alleFunktionen.h"

int main()
{
	int numbers = 0;
	int min = 0, max = 0;
	int speicher;

	printf("Wie viele Zahlen willst du initialisieren: ");
	scanf("%d", &numbers);
	int data[numbers];
	for(int i = 0; i < numbers; i++)
	{
		printf("%2d. ", i + 1);
		printf("Messwert = ");
		scanf("%d", &data[i]);
	}
	
	minmax(data, numbers, &max, &min);
	speicher = isSorted(data, numbers);
	
	printf("Maximum = %d\n", max);
	printf("Minimum = %d\n", min);
	
	if(speicher == 1) 
	{
		printf("Messwerte sind sortiert !");
	}
	
	else 
	{
		printf("Messwerte sind nicht sortiert !");
	}
	
	return 0;
}
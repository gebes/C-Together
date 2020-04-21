#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 13

int main()
{
  float average = 0;
  int medbigger = 0, medsmaller = 0;
  int min = 0, max = 0;
  int iQFld[size] = {131,101,75,103,110,89,101,90,127,101,94,102,102};
  int median = 0, most = 0, counter = 0;
  int zahl = 0;
  
  // INITIALISIERUNG
  averageExa03(iQFld,size,&average);
  minmax(iQFld,size,&max,&min);
  biggerandsmallerthanIQ(iQFld,size,average,&medsmaller,&medbigger);
  mostCommonIQ(iQFld,size,&most,&counter,&zahl);
  medianFunction(iQFld,size,&median);
  
  // OUTPUT
  outputExa03(iQFld,size,min,max,average,most,counter,zahl,medsmaller,medbigger, median);
  
  return 0;
}
	
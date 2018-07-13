#include"stdio.h"

void main()
{
// Define another macro if MACRO NUM is defined 

#ifndef NUM
      #define MAX 20 
#endif

printf("MAX number is : %d",MAX);
}
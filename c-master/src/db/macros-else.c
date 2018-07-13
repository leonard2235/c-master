#include<stdio.h>
#define NUM 11

void main()
{
#if((NUM%2)==0)
      printf("\nNumber is Even");
#else
      printf("\nNumber is Odd");
#endif
}
#include<stdio.h>
#define NUM 10

void main()
{
#if(NUM == 0)
       printf("\nNumber is Zero");
#elif(NUM > 0)
       printf("\nNumber is Positive");
#else
       printf("\nNumber is Negative");
#endif
}
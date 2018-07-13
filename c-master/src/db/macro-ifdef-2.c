#include<stdio.h>

int main(){

#ifdef __DATE__
         printf("%s",__DATE__);
    #else
         printf("__DATE__ is not defined");
    #endif

return 0;
}
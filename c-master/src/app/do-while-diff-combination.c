#include <stdio.h>
int main () {
int i = 0;
int loop_count = 5;

printf("Case1:\n");
do {
printf("%d\n",i);
i++;
} while (i<loop_count);

printf("Case2:\n");
i=20;
do {
printf("%d\n",i);
i++;
} while (0);

printf("Case3:\n");
i=0;
do {
printf("%d\n",i);
} while (i++<5);

printf("Case4:\n");
i=3;
do {
printf("%d\n",i);
i++;
} while (i < 5 && i >=2);
return 0;
}
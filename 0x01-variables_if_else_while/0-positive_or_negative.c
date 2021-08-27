#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*hello there 
*main intery poing
*discription somthing
*
*return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
  printf("%d Is positive\n", n);
}
else if (n == 0)
{
printf("%d Is zero\n", n);
}
else
{
printf("%d Is Negative\n", n);
}
return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/
/*betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*you code goes there */
if (n > 0)
{
printf("%dIs positive\n");
}
else if (n == 0)
{
printf("%d Is zero\n");
}
else
{
printf("Is Negative\n");
}
return (0);
}

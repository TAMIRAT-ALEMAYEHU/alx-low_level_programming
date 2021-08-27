#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
/*betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*you code goes there */
if (n == 0)
{
printf("Is zero\n");
}
else if (n > 0)
{
printf("Is positive\n");
}
else 
{
printf("Is Negative\n");
return (0);
}

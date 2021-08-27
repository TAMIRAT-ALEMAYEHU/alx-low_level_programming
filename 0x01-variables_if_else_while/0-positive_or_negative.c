#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*hello, main intery poing discription somthing return 0 */
int main(void)
{
/*This is my main function */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* This is my code*/
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

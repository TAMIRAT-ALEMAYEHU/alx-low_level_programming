#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes here */
main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
{
printf("Last digit of ", n, "is greater than 5");
}
else if (n == 0)
{
printf("Last digit of ", n, "is 0");
}
else if (n < 6)
{
printf("Last digit of ", n, "is less than 6 not 0");
}
return (0);
}

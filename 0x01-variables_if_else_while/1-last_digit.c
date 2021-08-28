#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting poing
 *
 * Return:0
 *
 * Descriptions: to check a number is greater than 5 or less than 6
 */

int main(void)
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

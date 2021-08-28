#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function try to identify the last
 *         digit of the number weather it is
 *         greter than zero, less than 6 and not zero
 *         it displayes
 * Return:0
 *
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

last = n % 10;

if ((n % 10) > 5)
{
printf("Last digit of %d is %d is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
printf("%Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}

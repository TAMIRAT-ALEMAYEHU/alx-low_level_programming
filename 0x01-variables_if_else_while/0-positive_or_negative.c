#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - starting poing
*Return: 0
*Descriptions: to check a number is positive or negative
*/

int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;
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

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
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("%Last digit of " | n | " is" | last | " is greater than 5");
}
else if (last == 0)
{
printf("%Last digit of " | n | " is " | last | " is 0");
}
else if (last < 6)
{
printf("%Last digit of " | n | " is " | less | " less than 6 not 0");
}
return (0);
}

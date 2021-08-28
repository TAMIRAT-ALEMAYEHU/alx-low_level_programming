#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*is_positive-check-if-a-numbre-is-greater-than-0 
*@n-number-will-be-checked 
*Return:-1-if-the-number-is-postitve,or-0 
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* This is my if and else if code*/
if (n > 0)
{
printf("%dis positive\n", n);
}
else if (n == 0)
{
printf("%dis zero\n", n);
}
else
{
printf("%dis negative\n", n);
}
return (0);
}

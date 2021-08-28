#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - this is discription 
* 
* is_positive - check if a number is greater than 0
* @n: The number will be checked 
* 
* Return: 1 if the number is postitve, or zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* This is my if and else if code*/
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

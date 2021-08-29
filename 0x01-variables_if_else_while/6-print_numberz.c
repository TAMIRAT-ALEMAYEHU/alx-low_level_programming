#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function works for single digit numbers base 10
 *
 * Return: 0
 *
 * Description - displays base 10 single digit numbers only
 */
int main(void)
{
int expo = 0;
int val = 0;
while (val < 10)
{
putchar(expo);
expo++;
val++;
}
putchar('\n');
return (0);
}

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
int putchar(int expo);
int expo = 0;
while (expo < 10)
{
putchar(expo);
expo++;
}
putchar('\n');
return (0);
}

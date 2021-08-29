#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
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
for(expo = 48; expo < 58; expo++)
{
putchar(expo);
}
putchar('\n');
return (0);
}

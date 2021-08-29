#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - functions for base 16 numbers
 *
 * Return: 0
 *
 * Descriptions - displays all base 16 numbers lowwercaseers
 */
int main(void)
{
int n;
char ch;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

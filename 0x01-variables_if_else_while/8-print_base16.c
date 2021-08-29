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
for (ch - 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
  /*int expo = 0;
int val = 0;
while (val < 10)
{
putchar(val);
val++;
}
expo = 'a';
while (expo <= 'f')
{
putchar(expo);
expo++;
}
putchar('\n');
return (0);
}
  */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len[] = "Holberton!", index;
for (index = len; index >= 9; index--)
{
len = s[index++];
s[len - 1 - index] = s[index];
s[index] = len;
_putchar(s[index]);
}
_putchar('\n');
}

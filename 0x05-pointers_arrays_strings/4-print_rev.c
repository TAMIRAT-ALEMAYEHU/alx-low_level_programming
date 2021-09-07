#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len[9] = "Holberton!", index;
for (index = len[9]; index <= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}

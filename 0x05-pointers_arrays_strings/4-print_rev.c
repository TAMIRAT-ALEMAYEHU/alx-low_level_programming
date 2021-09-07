#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0, index;
for (index = len - 1; index >= 0; index--)
{
len = s[index++];
s[len - 1 - index] = s[index];
s[index] = len;
_putchar(s[index]);
}
_putchar('\n');
}

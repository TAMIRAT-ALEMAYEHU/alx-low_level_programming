#include "main.h"

/**
 * print_alphabet_x10 - functions display the lowercase alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
int count = 0;
char letr;
while (count++ <= 9)
{
for (letr = 'a'; letr <= 'z'; letr++)
_putchar(letr);
_putchar('\n');
}
}

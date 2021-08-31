#include "main.h"
/**
 * print_alphabet - function displays alphabet in lowercase
 *
 * Descriptions: this program displays alphabet in lowercase
 *               follwed by new line
 */
void print_alphabet(void)
{
char letr;
for (letr = 'a'; letr <= 'z'; letr++)
{
_putchar(letr);
}
_putchar('\n');
}


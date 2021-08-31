#include "main.h"

/**
 * _abs - displayes the sign
 * @n: the number
 * Return: 1, 0, or -1
 */

int _abs(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

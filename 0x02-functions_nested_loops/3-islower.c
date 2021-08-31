#include "main.h"

/**
 * _islower - function check weather the letter is lowercase of not
 *
 * Return: 1 otherwise 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

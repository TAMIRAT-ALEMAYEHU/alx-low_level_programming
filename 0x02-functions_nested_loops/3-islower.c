#include "main.h"
/**
 * _islower - functions checks weather the letter
 * @c: is the char to be checked
 *
 * Return: 1 when the letter is lowercase otherwise 0
 */
void _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

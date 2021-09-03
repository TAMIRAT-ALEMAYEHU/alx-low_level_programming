#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charactor
 * @c: the character
 *
 * Return: on 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

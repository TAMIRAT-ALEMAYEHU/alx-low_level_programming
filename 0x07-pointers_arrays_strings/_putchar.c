#include <main.h>
#include <unisted.h>

/**
 * _putchar - writes the character c to stdout
 * @c: tthe character to print
 * Return: On success 1
 */

int _putchar (char c)
{
return (write(1, &c, 1));
}

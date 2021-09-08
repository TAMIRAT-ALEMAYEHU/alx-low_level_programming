#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destlen = 0;

	while (dest[index++])
		destlen++;

	for (index = 0; src[index] && index < n; index++)
		dest[destlen++] = src[index];

	return (dest);
}

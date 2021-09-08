<<<<<<< HEAD
#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *
 *Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int longdest;
	int j;

	for (longdest = 0; dest[longdest] != '\0'; longdest++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[longdest] = src[j];
		longdest++;
	}
	return (dest);
}
=======
#include "main.h"

/**
 * *_strcat - Concatenates the string pointed
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, destlen = 0;

	while (dest[index++])
		destlen++;

	for (index = 0; src[index]; index++)
		dest[destlen++] = src[index];

	return (dest);
}
>>>>>>> 184354d23ae87edd7bd59c27a0ab17c530fdf721

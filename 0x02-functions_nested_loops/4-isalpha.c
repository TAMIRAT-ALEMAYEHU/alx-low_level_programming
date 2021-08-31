#include "main.h"

/**
 * _isalpha - function checks the letter weather
 *              lowercase or upercase
 * @c: the car to be checked in the fun
 * Return: 1 else return 0
 */
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
return (1);
else
return (0);
}

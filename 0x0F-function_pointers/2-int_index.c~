#include "function_pointers.h"
/**
 * int_index - searches for an interger in an array
 * @array: the array of intergers
 * @size: the size
 * @cmp: a pointer to the function to be used
 *
 * Return: if no element matches
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}

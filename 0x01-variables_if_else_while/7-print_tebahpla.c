#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function works to display lower case letters
 *
 * Return: 0
 *
 * Descriptions - this prints the lower case alphabet reverse order
 */
int main(void)
{
int ch;
ch = 'z';
while (ch <= 'a')
{
putchar(ch);
if (ch == 'a')
{
putchar('\n');
}
ch--;
}
return (0);
}

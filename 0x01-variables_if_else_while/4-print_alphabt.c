#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - functions for alphabets
 *
 * Return: 0
 *
 * Description : displayes all small letters
 * except e and q
 *
 */

int main(void)
{
int ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
if ((ch == 'e') || (ch == 'q'))
{
ch++;
}
}
putchar('\n');
return (0);
}

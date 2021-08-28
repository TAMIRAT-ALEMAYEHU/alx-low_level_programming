#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function displays the alphabet from a to z
 *
 * Return: 0
 *
 * Description : displays all alphabet small letters
*/
int main(void)
{
int ch;
ch = 'a';
int putchar(int);
while (ch <= 'z')
{
putchar(ch);
ch++;
}
return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function work for both upper and lower alphabets to display
 *
 * discription : first it displays lowwer case letters then
 * upper case letters will be displayed
 *
 * Return: 0
 */
int main(void)
{
int ch;
int putchar(int);
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
if (ch == 'z')
{
putchar('\n');
ch = 'A'
while (ch < 'Z')
{
putchar(ch);
ch++;
}
}
}
return (0);
}

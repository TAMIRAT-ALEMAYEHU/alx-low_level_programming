#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function all pro
 * Return: 0
 * Description - print all posible combination
 * of single digit
 */
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
if (num > 48)
{
putchar(',');
putchar(' ');
putchar(num);
}
}
return (0);
}


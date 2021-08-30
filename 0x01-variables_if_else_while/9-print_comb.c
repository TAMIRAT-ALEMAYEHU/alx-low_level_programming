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
putchar((num % 10) + '0');
if (num == 58)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}


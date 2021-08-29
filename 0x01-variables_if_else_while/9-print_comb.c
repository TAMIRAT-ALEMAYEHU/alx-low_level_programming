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
if (num == 48)
{
putchar(num);
}
else if (num < 58)
{
putchar(',', ' ');
putchar(num);
}
}
putchar(' ');
return (0);
}


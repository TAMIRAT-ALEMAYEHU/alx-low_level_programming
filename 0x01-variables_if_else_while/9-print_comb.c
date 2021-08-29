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
int num = 0;
for (num = 48; num < 58; num++)
{
if (num == 0)
{
putchar(num);
}
else if (num < 58)
{
putchar(", ", num);
putchar(' ');
}
putchar('\n');
}
return (0);
}


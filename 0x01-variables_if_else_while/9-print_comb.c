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
for (num = 0; num < 10; num++)
{
if(num == 0)
{
putchar(num);
}
else if(num < 10)
{
putchar(',');
putchar(' ');
putchar(num);
}
}
return (0);
}


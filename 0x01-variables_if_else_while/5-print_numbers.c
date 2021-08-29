#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - this function shows base 10 number
*
* Return: 0
*
* Description : all program displayes base 10 single digit numbers return
*/

int main(void)
{
int base = 10;
int expo = 0;
long double val = 1.0;
while (expo != 0)
{
val *= base;
printf("Base 10 single digits : %d", val);
expo++;
if (val > 9)
return (0);
}
return (0);
}

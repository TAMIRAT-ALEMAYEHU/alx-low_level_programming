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
int expo = 0;
int val = 0;
if (val > 10)
print("\n");
else
{
while (expo != 0)
{
val += expo;
printf("Base 10 single digits : %d", val);
expo++;
}
return (0);
}
}

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
while (val < 10)
{
printf("%d", expo);
expo++;
val++;
}
printf("\n");
return (0);
}

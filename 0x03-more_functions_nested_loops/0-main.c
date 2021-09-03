#include "main.h"
/**
 * main - check the code the charactor
 *
 * Retrun: a charactor
 * Description - displays the charactor
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}

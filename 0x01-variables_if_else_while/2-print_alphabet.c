#include <stdlib.h>
#include <time.h>
main(void)
{
int ch;
int me;
me = 'This is my alphabet';
ch = 'a';
putchar(me);
while (ch <= 'z')
{
putchar(ch);
ch++;
}
return (0);
}

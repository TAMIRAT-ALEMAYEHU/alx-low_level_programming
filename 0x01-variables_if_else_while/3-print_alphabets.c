#include <stdlib.h>
#include <time.h>
main(void)
{
int ch;
int me;
me = '\n';
ch = 'a';
while (ch < 'z')
{
putchar(ch);
ch++;
if (ch == 'z')
{
putchar(me);
ch = 'A'
while (ch < 'Z')
{
putchar(ch);
ch++;
}
}
}
return (0);
}
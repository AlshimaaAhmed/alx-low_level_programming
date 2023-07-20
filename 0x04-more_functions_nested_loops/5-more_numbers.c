#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times
 * return: void
 */
void more_numbers(void)
{
int i;
char c;
for (i = 0 ; i < 10 ; i++)
{
for (c = '0' ; c <= '14' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}

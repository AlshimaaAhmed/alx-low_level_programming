#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: the pointer that reseve the string
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int i;
for (i = 0 ; *(str + i) != '\0' ; i++)
{
len += 1;
}
if (len % 2 == 0)
{
i = len / 2;
}
else
{
i = (len / 2) + 1;
}
for (; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

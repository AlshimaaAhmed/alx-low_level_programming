#include "main.h"
/**
 * print_rev - print string ib revers order
 * @s: the pointer that will recifed the addriss of first element in the string
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;
int i;
for (i = 0 ; *(s + i) != '\0' ; i++)
{
len += 1;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

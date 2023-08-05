#include "main.h"
/**
 * _puts_recursion - function like puts;
 * @s: the string
 * Return:void
 */
void _puts_recursion(char *s)
{
static int i;
if (s[i] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[i]);
i++;
_puts_recursion(s[i]);
}

include "main.h"
/**
 * _puts_recursion - print astring with resursion methode
 *@s:the string pointer
 *return: void
 */
void _puts_recursion(char *s)
{
if (!s)
{
_putchar("\n");
return;
}
_putchar(s);
s++;
_puts_recursion(s);
}

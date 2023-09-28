#include "main.h"
/**
 * _strlen_recursion - return the number of characters in the string
 * @s: the pointer of the string
 * Return: the number of characters in string
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 +  _strlen_recursion(s + 1));
}

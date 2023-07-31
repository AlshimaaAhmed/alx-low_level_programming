#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s : the string
 * @c: the character
 * Return:Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (0);
}

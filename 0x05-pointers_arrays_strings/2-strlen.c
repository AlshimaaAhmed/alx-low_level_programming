#include "main.h"
/**
 * _strlen - culculate the length of the string
 * @s: the pointer that will recifed the addriss of first element in the string
 * Return: lenght
 */
int _strlen(char *s)
{
int len = 0;
int i;
for (i = 0 ; *(s + i) != '\0' ; i++)
{
	len += 1;
}
return (len);
}

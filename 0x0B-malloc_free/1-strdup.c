#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
unsigned int i;
char *str2;
str2 = malloc(strlen(str) + 1);
if (str == NULL || str2 == NULL)
return (NULL);
for (i = 0; i < strlen(str); i++)
{
str2[i] = str[i];
}
return (str2);
}

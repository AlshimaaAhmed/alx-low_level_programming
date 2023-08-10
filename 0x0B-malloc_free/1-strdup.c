#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *str2;
int i;
int size = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
size++;
i++;
}
str2 = malloc(sizeof(char) * size);
if (str2 == NULL)
return (NULL);
for (i = 0; i < size; i++)
str2[i] = str[i];
return (str2);
}

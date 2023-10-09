#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int a = 0, i, j;
if (s1 != '\0')
a++;

ptr = (char *)malloc(a + n + 1);
if (ptr == NULL)
return (NULL);

for (i = 0; s1 != '\0'; i++)
ptr[i] = s1[i];

for (j = 0; j < n; j++)
{
if (s2 != '\0')
{
ptr[i] = s2[j];
}
else
{
break;
}
i++;
}
ptr[i] ='\0';
return (ptr);
}

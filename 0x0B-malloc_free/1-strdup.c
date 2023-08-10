#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
char *str2;
unsigned int i;
int size = 0;
if (str == NULL)
return (NULL);
while(str)
{
size ++;
}
str2 = malloc(sizeof(char) * size);
if (size == 0 || str2 == NULL)
return (NULL);
for (i = 0; i < size; i++)
str2[i] = str[i];
return (str2);
}

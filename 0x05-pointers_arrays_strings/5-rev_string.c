#include "main.h"
/**
 * rev_string - print string ib revers order
 * @s: the pointer that will recifed the addriss of first element in the string
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
int i, j;

for (i = 0 ; *(s + i) != '\0' ; i++)
{
len += 1;
}
j = len - 1;
char c[200];
for (i = 0; i <= len - 1; i++)
{
c[i] = s[j];
j--;
}
s = c;
}

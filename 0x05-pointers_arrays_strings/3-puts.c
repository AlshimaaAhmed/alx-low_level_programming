#include "main.h"
/**
 * _puts - prints the string
 * @str: pointer that reseve the string
 * return: void
 */
void _puts(char *str)
{
int i;
i = 0;
while (*(str + i) != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

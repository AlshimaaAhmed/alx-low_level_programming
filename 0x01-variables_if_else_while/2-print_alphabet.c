#include <stdio.h>
/**
 * main - alphabet printing
 * Return: Always 0 (sucess)
 */
int main(void)
{
char l = 'a';
for (l = 'a' ; l <= 'z' ; l++)
{
putchar('%c', l);
}
return (0);
}

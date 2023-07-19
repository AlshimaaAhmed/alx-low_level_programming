#include "main.h"
/**
 * print_to_98 - to print from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n ; i <= 98 ; i++)
{
printf("%d", i);
}
}
else 
{
for (i = n ; i >= 98 ; i--)
{
printf("%d", i);
}
}
